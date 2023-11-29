#include <iostream>

// Write a program that reads an integer and print the 4th from the right side.
// If no such digit, print 0

int main() {
    int num;
    std::cin >> num;
    num /= 1000;
    std::cout << num % 10 << std::endl;
    return 0;
}