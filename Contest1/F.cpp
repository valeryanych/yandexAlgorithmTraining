#include <iostream>

int main() {
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    int s1, s2, s3, s4;
    s1 = (b1 > b2) ? (a1+a2)*b1 : (a1+a2)*b2;
    s2 = (a1 > b2) ? (b1+a2)*a1 : (b1+a2)*b2;
    s3 = (a1 > a2) ? (b1+b2)*a1 : (b1+b2)*a2;
    s4 = (b1 > a2) ? (a1+b2)*b1 : (a1+b2)*a2;
    if (s1 <= s2 && s1 <= s3 && s1 <= s4) {
        (b1 > b2) ? std::cout << a1+a2 << " " << b1 << std::endl : std::cout << a1+a2 << " " << b2 << std::endl;
    }
    else if (s2 <= s1 && s2 <= s3 && s2 <= s4) {
        (a1 > b2) ? std::cout << b1+a2 << " " << a1 << std::endl: std::cout << b1+a2 << " " << b2 << std::endl;
    }
    else if (s3 <= s1 && s3 <= s2 && s3 <= s4) {
        (a1 > a2) ? std::cout << b1+b2 << " " << a1 << std::endl: std::cout << b1+b2 << " " << a2 << std::endl;
    }
    else if (s4 <= s1 && s4 <= s2 && s4 <= s3) {
        (b1 > a2) ? std::cout << a1+b2 << " " << b1 << std::endl: std::cout << a1+b2 << " " << a2 << std::endl;
    }
    return 0;
}
