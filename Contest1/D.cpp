#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (c < 0 || (a == 0 && b != c*c))
        std::cout << "NO SOLUTION" << std::endl;
    else if (a == 0 && b == c*c)
        std::cout << "MANY SOLUTIONS" << std::endl;
    else {
        if ((double)(c*c - b)/a == int((c*c - b)/a)) {
            std::cout << int((c*c - b)/a) << std::endl;
        }
        else
            std::cout << "NO SOLUTION" << std::endl;
    }
    return 0;
}
