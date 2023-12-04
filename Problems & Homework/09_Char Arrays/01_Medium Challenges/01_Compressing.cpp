#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    char c = str[0];
    int counter = 1;
    bool first = true;
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == c) {
            counter++;
        } else {
            if (!first) {
                std::cout << '_';
            }
            first = false;
            std::cout << c << counter;
            c = str[i];
            counter = 1;
        }
        if (i == str.length() - 1) {
            if (!first)
                std::cout << '_';
            std::cout << c << counter;
        }
    }
    std::cout << std::endl;
    return 0;
}