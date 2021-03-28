#include <iostream>
#include <stdexcept>
#include "snowman.hpp"


constexpr int ONE = 10;
constexpr int TWO = 100;
constexpr int THREE = 1000;
constexpr int FOUR = 10000;
constexpr int FIVE = 100000;
constexpr int SIX = 1000000;
constexpr int SEVEN = 10000000;

namespace ariel {
    
string hat(int x) {
        int h = 0;
        h = (x / SEVEN);
        switch(h){
            case 1:
                return " _===_ ";
            case 2:
                return "  ___ \n .....";
            case 3:
                return "   _  \n  /_\\ ";
            case 4:
                return "  ___ \n (_*_)";
            default:
                throw invalid_argument ("got invalid H");
        }
    }

string nose_mouth(int mn) {
        int a = ((mn / (SIX)) % ONE);
        switch (a) {
            case 1:
                return ",";
            case 2:
                return ".";
            case 3:
                return "_";
            case 4:
                return " ";
            default:
                throw invalid_argument("Incorrect input for nose");
        }
    }

string left_eye(int l_eye) {
        int a = ((l_eye / (FIVE)) % ONE);
        switch (a) {
            case 1:
                return ".";
            case 2:
                return "o";
            case 3:
                return "O";
            case 4:
                return "-";
            default:
                throw invalid_argument("Incorrect input for the left eye");
        }
    }

string right_eye(int r_eye) {
        int a = ((r_eye / (FOUR)) % ONE);
        switch (a) {
            case 1:
                return ".";
            case 2:
                return "o";
            case 3:
                return "O";
            case 4:
                return "-";
            default:
                throw invalid_argument("Incorrect input for the right eye");
        }
    }

string left_upper_arm(int LUA) {
        int a = ((LUA / (THREE)) % ONE);
        switch (a) {
            case 1:
            case 4:
            case 3:
                return " ";
            case 2:
                return "\\";
            default:
                throw invalid_argument("Incorrect input for the left upper arm");
        }
    }

string left_lower_arm(int LWA) {
        int a = ((LWA / (THREE)) % ONE);
        switch (a) {
            case 1:
                return "<";
            case 2:
            case 4:
                return " ";
            case 3:
                return "/";
            default:
                throw invalid_argument("Incorrect input for the left lower arm");
        }
    }

string right_upper_arm(int RUA) {
        int a = ((RUA / (TWO)) % ONE);
        switch (a) {
            case 1:
            case 4:
            case 3:
                return " ";
            case 2:
                return "/";
            default:
                throw invalid_argument("Incorrect input for the right upper arm");
        }
    }

string right_lower_arm(int RWA) {
        int a = ((RWA / (TWO)) % ONE);
        switch (a) {
            case 1:
                return ">";
            case 2:
            case 4:
                return " ";
            case 3:
                return "\\";
            default:
                throw invalid_argument("Incorrect input for the lower arm");
        }
    }

string torso(int t) {
        int a  = ((t / (ONE)) % ONE);
        switch (a) {
            case 1:
                return " : ";
            case 2:
                return "] [";
            case 3:
                return "> <";
            case 4:
                return " ";
            default:
                throw invalid_argument("Incorrect input for torso");
        }
    }

string base(int b) {
        int a = (b % ONE);
        switch (a) {
            case 1:
                return " : ";
            case 2:
                return "\" \"";
            case 3:
                return "___";
            case 4:
                return " ";
            default:
                throw invalid_argument("Incorrect input for the base");
        }
    }
    
string snowman(int s) {
        string answer = hat(s);
        answer += "\n";
        answer += left_upper_arm(s) + "(" + left_eye(s) + nose_mouth(s) + right_eye(s) + ")" + right_upper_arm(s);
        answer += "\n";
        answer += left_lower_arm(s) + "(" + torso(s) + ")" + right_lower_arm(s);
        answer += "\n";
        answer += + " (" + base(s) + ") ";
        answer += "\n";
        return answer;
    }
}                    // namespace ariel