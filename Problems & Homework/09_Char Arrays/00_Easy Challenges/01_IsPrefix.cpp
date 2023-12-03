#include <iostream>

int main() {
    bool is_prefix = true;
    std::string str1, str2;
    std::cin >> str1 >> str2;
    for (int i = 0; i < str2.length(); i++) {
        if (str1[i] != str2[i]) {
            is_prefix = false;
            break;
        }
    }
    if (is_prefix)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}