#include <iostream>

int main() {
    char c;
    int num;
    std::cin >> num >> c;
    while (num--)
        std::cout << c;
    std::cout << std::endl;
    return 0;
}