#include <iostream>

// Write a program that reads integer N and Print the sum from 1 to N

int main() {
    int num;
    std::cin >> num;
    std::cout << (num * (num + 1)) / 2 << std::endl;
    return 0;
}