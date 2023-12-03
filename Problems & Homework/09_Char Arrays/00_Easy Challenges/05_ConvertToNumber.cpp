#include <iostream>

int main() {
    std::string str;
    int number = 0;
    std::cin >> str;
    for (char c : str) {
        number += (c - '0');
        number *= 10;
    }
    number /= 10;
    std::cout << number << ' ' << number * 3 << std::endl;
}