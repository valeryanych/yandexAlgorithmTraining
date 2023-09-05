#include <iostream>
#include <cmath>
#include <vector>
#include <set>


void sol(int k1, int m, int k2, int p2, int n2) {
    int c = 1;
    std::vector<int> a;
    for (; c <= 1000000; ++c) {
        int porch = k2 / (m*c) + 1;
        int level = (k2 % (porch*m*c) - 1) / c + 1 - m*(porch-1);
        if (porch == p2 && level == n2) {
            a.push_back(c);
            //std::cout << c << " " << porch << " " << level << '\n';
        }
    }
    if (a.size() == 1) {
        c = a[0];
        int porch = k1 / (m*c) + 1;
        int level = (k1 % (porch*m*c) - 1) / c + 1 - m*(porch-1);
        std::cout << porch << " " << level << '\n';
    }
    else if (a.size() == 0) {
        std::cout << "-1 -1\n";
    }
    else {
        std::set<int> porches, levels;
        for (size_t i = 0; i < a.size(); ++i) {
            int porch = k1 / (m*a[i]) + 1;
            int level = (k1 % (porch*m*a[i]) - 1) / a[i] + 1 - m*(porch-1);
            porches.insert(porch);
            if (level >= 1)
                levels.insert(level);
        }
        if (porches.size() != 1 && levels.size() != 1) {
            std::cout << "-1 -1\n";
        }
        else if (porches.size() == 1 && levels.size() == 1) {
            std::cout << *porches.begin() << " " << *levels.begin() <<"\n";
        }
        else if (porches.size() == 1) {
            std::cout << *porches.begin() << " 0\n";
        }
        else {
            std::cout << "0 " << *levels.begin() << '\n';
        }
    }
    return;
}

void test() {
    std::cout << "test 1:  89 20 41 1 11\n";
    sol(89, 20, 41, 1, 11);
    std::cout << "test 2:  89 20 44 1 11\n";
    sol(89, 20, 44, 1, 11);
    std::cout << "test 3:  41 20 89 2 3 \n";
    sol(41, 20, 89, 2, 3 );
    std::cout << "test 4:  11 1  1  1 1 \n";
    sol(11, 1 , 1 , 1, 1 );
    std::cout << "test 5:  3  2  2  2 1 \n";
    sol(3 , 2 , 2 , 2, 1 );
    std::cout << "test 6:  26 4  10 1 3 \n";
    sol(26, 4 , 10, 1, 3 );
    std::cout << "test 7:  13 9  33 2 4 \n";
    sol(13, 9 , 33, 2, 4 );
    std::cout << "test 8:  2  4  15 2 4 \n";
    sol(2 , 4 , 15, 2, 4 );
    std::cout << "test 9: 2  4  1  2 4 \n";
    sol(2 , 4 , 1 , 2, 4 );
    std::cout << "test 10: 11 4  5  1 2 \n";
    sol(11, 4 , 5 , 1, 2 );
    std::cout << "test 11: 5  4  5  1 2 \n";
    sol(5 , 4 , 5 , 1, 2 );
    std::cout << "test 12: 6  4  5  1 2 \n";
    sol(6 , 4 , 5 , 1, 2 );
    std::cout << "test 13: 4  4  5  1 2 \n";
    sol(4 , 4 , 5 , 1, 2 );
    std::cout << "test 14: 3  1  9  7 3 \n";
    sol(3 , 1 , 9 , 7, 3 );
}

int main() {
    //test();
    int k1, m, k2, p2, n2;
    std::cin >> k1 >> m >> k2 >> p2 >> n2;
    sol(k1, m, k2, p2, n2);
    //auto ans = sol(k1, m, k2, p2, n2);
    //std::cout << ans.first << " " << ans.second << std::endl;
    return 0;
}


// 89 20 41 1 11        2 3
// 89 20 44 1 11        2 3
// 41 20 89 2 3         1 11
// 11 1  1  1 1         0 1
// 3  2  2  2 1         -1 -1
// 26 4  10 1 3         2 3
// 13 9  33 2 4         -1 -1
// 2  4  15 2 4         1 1
// 2  4  1  2 4         -1 -1
// 11 4  5  1 2         1 0
// 5  4  5  1 2         1 2
// 6  4  5  1 2         1 0
// 4  4  5  1 2         1 0
// 3  1  9  7 3         -1 -1


//89, 20, 41, 1, 11
//89, 20, 44, 1, 11
//41, 20, 89, 2, 3
//11, 1 , 1 , 1, 1
//3 , 2 , 2 , 2, 1
//26, 4 , 10, 1, 3
//13, 9 , 33, 2, 4
//2 , 4 , 15, 2, 4
//2 , 4 , 1 , 2, 4
//11, 4 , 5 , 1, 2
//5 , 4 , 5 , 1, 2
//6 , 4 , 5 , 1, 2
//4 , 4 , 5 , 1, 2
//3 , 1 , 9 , 7, 3
