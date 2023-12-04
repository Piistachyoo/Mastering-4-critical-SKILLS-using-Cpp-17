#include <iostream>

int main() {
    std::string str1, str2;
    int condition = 0;
    int shortest_length = str1.length();

    std::cin >> str1 >> str2;

    if (shortest_length > str2.length())
        shortest_length = str2.length();

    for (int i = 0; i < shortest_length && !condition; i++) {
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                condition = 1;
            } else {
                condition = -1;
            }
        }
    }

    if (condition == 0) {
        if (str1.length() > str2.length()) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    } else if (condition == -1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}