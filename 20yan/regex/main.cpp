#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s {"I love MSU BAKU"};

    std::regex r {"MSU[a-z,A-Z, ]+"};

    /*std::regex_match(s, r)
    std::regex_match(s.begin(), s.end(), r)*/

    std::smatch result;
    std::regex_search(s, result ,r);

    for(auto x: result)
    {
        std::cout << x << " ";
    }


    return 0;
}