#include <iostream>
#include <string>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a*a + b*b >= c*c && a*a + c*c >= b*b && c*c + b*b >= a*a)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
