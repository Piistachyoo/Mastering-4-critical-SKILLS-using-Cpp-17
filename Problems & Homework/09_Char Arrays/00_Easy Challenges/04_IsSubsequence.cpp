#include <iostream>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    bool is_subsequence = true;
    int index = 0;
    for (int i = 0; i < str2.length(); i++) {
        for (; index < str1.length(); index++) {
            if (str2[i] == str1[index])
                break;
        }
        if (index >= str1.length()) {
            is_subsequence = false;
        }
    }
    if (is_subsequence)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}