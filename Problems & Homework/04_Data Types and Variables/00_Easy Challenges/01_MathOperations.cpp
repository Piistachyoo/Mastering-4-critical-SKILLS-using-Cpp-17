#include <iostream>

// Write a program that reads 2 numbers and print their + - * /

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;
    std::cout << n1 << " + " << n2 << " = " << static_cast<long long>(n1) + n2
              << std::endl;
    std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
    if (n2 != 0)
        std::cout << n1 << " / " << n2 << " = " << static_cast<double>(n1) / n2
                  << std::endl;
    else
        std::cout << n1 << " / " << n2 << " = " << 0 << std::endl;
    std::cout << n1 << " * " << n2 << " = " << static_cast<long long>(n1) * n2
              << std::endl;
    return 0;
}