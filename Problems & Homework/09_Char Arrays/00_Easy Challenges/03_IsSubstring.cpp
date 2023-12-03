#include <iostream>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    bool is_substring = false;
    for (int i = 0;
         i <= (str1.length() - str2.length()) && is_substring == false; i++) {
        if (str1[i] == str2[0]) {
            bool check = true;
            for (int j = 0; j < str2.length(); j++) {
                if (str1[i + j] != str2[j]) {
                    check = false;
                    break;
                }
            }
            if (check == true) {
                is_substring = true;
            }
        }
    }
    if (is_substring)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}