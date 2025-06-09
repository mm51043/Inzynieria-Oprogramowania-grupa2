//
// Created by MM on 12.05.2025.
//

#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <regex>
inline unsigned int hashP(const std::string& input) {
    unsigned int hash = 0;
    for (char c : input) {
        hash = hash * 31 + static_cast<unsigned char>(c);
    }
    return hash;
}
// int checkNewP(std::string inputP) {
//     std::regex regexP("[A-Z]");
//     if (inputP.length() < 8) {
//         return 0;
//     }
//     if (inputP.length() > 16 ) {
//         return 1;
//     }
//     if (!std::regex_search(inputP, std::regex("[A-Z]"))) {
//         return 2;
//     }
//     if (!std::regex_search(inputP, std::regex("[0-9]"))) {
//         return 3;
//     }
// }


#endif //LOGIN_H
