#include <string>
#include <iostream>

std::string problemSolution3(float height, char S) {
    // write your code here


    if (S < 1.70) {
        return "Short";
    } else if (S >= 1.70 && S <= 1.85) {
        return "Normal";
    } else if (S >= 1.85) {
        return "Tall";
    } else if (S < 1.60) {
        return "Short";
    } else if (S >= 1.60 && S <= 1.75) {
        return "Normal";
    } else if (S >= 1.75) {
        return "Tall";
    }

    // use return to return your result
    // make use of control flow statements
}