#include <iostream>
#include <string>

int main() {
    int troom, tcond;
    std::cin >> troom >> tcond;
    std::string s = "";
    std::cin >> s;
    if (s == "freeze") {
        if (troom > tcond)
            std::cout << tcond << std::endl;
        else
            std::cout << troom<< std::endl;
    }
    else if (s == "heat") {
        if (troom < tcond)
            std::cout << tcond << std::endl;
        else
            std::cout << troom << std::endl;
    }
    else if (s == "auto")
        std::cout << tcond << std::endl;
    else if (s == "fan")
        std::cout << troom << std::endl;
    return 0;
}
