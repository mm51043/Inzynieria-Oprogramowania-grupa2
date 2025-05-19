//
// Created by MM on 12.05.2025.
//

#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <regex>
std::string hashP(std::string inputP) {
    std::string output;
    for (int i = 0; i < inputP.length(); i++) {
        if (i != inputP.length())
            output += std::to_string(inputP[i]^inputP[i+1]);
        else
            output += std::to_string(inputP[i]^inputP[0]);
    }
    return output;
}
int checkNewP(std::string inputP) {
    std::regex regexP("[A-Z]");
    if (inputP.length() < 8) {
        return 0;
    }
    if (inputP.length() > 16 ) {
        return 1;
    }
    if (!std::regex_search(inputP, std::regex("[A-Z]"))) {
        return 2;
    }
    if (!std::regex_search(inputP, std::regex("[0-9]"))) {
        return 3;
    }
}


#endif //LOGIN_H
