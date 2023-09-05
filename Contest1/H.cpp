#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    int a, b, n, m;
    std::cin >> a >> b >> n >> m;
    int min_t1 = n + (n-1)*a, max_t1 = a*n + n + a, min_t2 = m + (m-1)*b, max_t2 = m*b + m + b;
    //std::cout << min_t1 << " " << max_t1 << " " << min_t2 << " " << max_t2 << std::endl;
    std::vector<int> s1, s2;
    for (int i = min_t1; i <= max_t1; ++i)
        s1.push_back(i);
    for (int i = min_t2; i <= max_t2; ++i)
        s2.push_back(i);
    std::vector<int> res;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(res));
    if (res.size() > 1)
        std::cout << *std::min_element(res.begin(), res.end()) << " " << *std::max_element(res.begin(), res.end()) << "\n";
    else if (res.size() == 1)
        std::cout << *res.begin() << " " << *res.begin() << "\n";
    else
        std::cout << "\n-1\n";
    return 0;
}

// множество возможных времен для кжадого пути
// берем пересечение    <- нужно исправить
// оттуда мин и макс
// если пересеч пустое, то -1
// min это когда она сразу видит поезд => min = n + (n-1)*a
// max это когда поезда нужно ждать a минут, и после последнего +a => max = a*n + n + a
// 3 + 2 = 5      6  -> 1 1 1 1 1 1 1

// tests:
// input            output(waiting):
// 1 3 3 2          5 7
// 1 5 1 2          -1
// 1 1 3 3          5 7
// 2 3 1 2          5 5
// 1 3 1 2          -1
// 4 5 11 9         51 59
// 4 4 10 11        51 54
// 100 3 1 2        5 11
// 1 1 1 1          1 3
