#include <iostream>

// Write a program that reads an integer and prints the sum of its last 3
// digits.

int main() {
    int num;
    std::cin >> num;
    int result = num % 10;
    num /= 10;
    result += num % 10;
    num /= 10;
    result += num % 10;
    std::cout << result << std::endl;
    return 0;
}