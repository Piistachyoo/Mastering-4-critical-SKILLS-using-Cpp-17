#include <iostream>

int main() {
    std::string str1, str2;
    bool is_suffix = true;
    std::cin >> str1 >> str2;
    for (size_t i = 0; i < str2.length(); i++) {
        if (str1[str1.length() - i] != str2[str2.length() - i]) {
            is_suffix = 0;
            break;
        }
    }
    if (is_suffix)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}