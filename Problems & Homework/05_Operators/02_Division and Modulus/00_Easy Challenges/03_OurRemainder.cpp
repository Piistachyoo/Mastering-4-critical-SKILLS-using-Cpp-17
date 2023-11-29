#include <iostream>

// Write a program that reads 2 positive integers and print such reminder
// without using the modulus operator %

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;
    int modulus = n1 - ((n1 / n2) * n2);
    std::cout << modulus << std::endl;
    return 0;
}