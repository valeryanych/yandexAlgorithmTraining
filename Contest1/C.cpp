#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> contacts(4);
    for (int k = 0; k < 4; ++k) {
        std::string added;
        std::cin >> added;
        for (size_t i = 0; i < added.size(); ++i)
            if (isdigit(added[i]))
                contacts[k].push_back(added[i]);
        if (contacts[k].size() == 7)
            contacts[k] = "495" + contacts[k];
        if (contacts[k][0] == '7' || contacts[k][0] == '8')
            contacts[k].erase(contacts[k].begin());
    }

    for (size_t i = 1; i < contacts.size(); ++i) {
        if (contacts[i] == contacts[0])
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}
