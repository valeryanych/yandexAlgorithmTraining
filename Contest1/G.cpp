#include <iostream>

int main() {
    int n, k, m;
    std::cin >> n >> k >> m;
    int details_count = 0;
	if (m > n || m > k ) {
    	std::cout << 0 << std::endl;
    	return 0;
    }
    while (n / k > 0) {
        int workpieces_count = n / k;
        int remain = n % k;
        details_count += (k / m) * workpieces_count;
        remain += (k % m) * workpieces_count;
        n = remain;
    }
    std::cout << details_count << std::endl;
    return 0;
}
