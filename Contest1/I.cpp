#include <iostream>

int main() {
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((d >= a && e >= b) || (d >= b && e >= a) || (d >= a && e >= c) || (d >= c && e >= a)
        || (d >= b && e >= c) || (d >= c && e >= b)) {
        std::cout << "YES" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;
    return 0;
}
