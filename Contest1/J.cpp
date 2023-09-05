#include <iostream>

int main() {
    double a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    double m1 = d*a - b*c, m2 = a*f - c*e, m3 = b*f - d*e;

    if (a == 0 && b == 0 && c == 0 && d == 0) {
        if (e == 0 && f == 0) { // система несовместна по теореме Кронакера
            std::cout << 5 << std::endl;
            return 0;
        }
        else {
            std::cout << 0 << std::endl;
            return 0;
        }
    }
    else if (m1 != 0) {
        std::cout << 2 << " " << (d*e - b*f)/m1 << " " << (f*a - c*e)/m1 << std::endl;
    }
    else if (m1 == 0) {
        if (m2 != 0 || m3 != 0)  // система несовместна по теореме Кронакера
            std::cout << 0 << std::endl;
        else if (a == 0 && c == 0) {
            std::cout << 4 << " " << e/b << std::endl;
        }
        else if (b == 0 && d == 0) {
            std::cout << 4 << " " << e/a << std::endl;
        }
        else {
            if (b != 0) {
                std::cout << 1 << " " << -a/b << " " << e/b << std::endl;
            }
            else {
                std::cout << 1 << " " << -c/d << " " << f/d << std::endl;
            }
        }

    }
    return 0;
}

// 0 0 0 0 0 0  5
// 0 0 0 0 0 1  0
// 0 0 0 0 1 0  0
// 2 3 5 4 2 5  must: 2 1 0
// 2 3 5 4 0 0  2 0 0
// 1 3 3 9 5 4  0
// 1 3 3 9 5 15  1 -0.33333 1.6667
// 0 5 0 15 1 3  4 0.2
// 5 0 15 0 1 3  3 0.2
