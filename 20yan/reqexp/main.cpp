#include <iostream>
#include <regex>
#include <string>

int main() {
    /*std::string s{"MSU Baku"};
    std::regex r{"(MSU)(.*)"};
    if(std::regex_match(s, r)) {
        std::cout << "String matches regex - 1\n";
    }
    if(std::regex_match(s.begin(), s.end(), r)) {
        std::cout << "String matches regex - 2\n";
    }*/
    std::string s{"I love MSU Baku"};
    std::regex r{"MSU[a-z,A-Z, ]?"};
    /*std::smatch result;
         для +
    std::regex_search(s, result, r);

    std::cout << s << "\n";

    for(auto x:result) {
        std::cout << x << "\n";
    }*/


    return 0;
}
