#include <iostream>
#include <regex>

int main() {
    std::string input{"      16.4645652+2- -3   "};
    std::regex norma1{R"((?:(?: *(?:[\-]?\d+[\.]?\d*) *(?:[\-+*\^/]| *))*))"};
    std::regex norma2{R"(\s+)"};
    //std::cout << "input the string\n";
    //std::getline(std::cin, input);

    std::smatch result;
    std::cout << input << " — string\n";
    if(std::regex_match(input, norma1)) {
        std::cout <<"YES!\n";
    }
    std::cout << std::regex_replace(input, norma2, "") << "\n";

    return 0;
}