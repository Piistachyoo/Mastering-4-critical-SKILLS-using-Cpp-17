#include <iostream>

// Write a program that reads 2 numbers a, b and divides them (a/b),
// but prints only the fraction part

int main() {
    double n1, n2;
    std::cin >> n1 >> n2;
    double result = n1 / n2;
    result -= static_cast<int>(result);
    std::cout << result << std::endl;
    return 0;
}