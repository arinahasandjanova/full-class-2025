#include <iostream>
#include <regex>

int main(){
    std::string s;
    std::regex r{R"((?:0[1-9]|[12][0-9]|3[01])\.(?:0[1-9]|1[0-2])\.(?:\d{4}) (?:0[0-9]|1[0-9]|2[0-3]):(?:[0-5][0-9]))"};
    std::cout << "input the string\n";
    std::getline(std::cin, s);

    std::smatch result;
    std::cout << s << " — string\n";
    while(std::regex_search(s, result, r)){
        for(auto x: result)
        {
            std::cout << x << " — TRUE!\n";
        }

    }

    return 0;
}