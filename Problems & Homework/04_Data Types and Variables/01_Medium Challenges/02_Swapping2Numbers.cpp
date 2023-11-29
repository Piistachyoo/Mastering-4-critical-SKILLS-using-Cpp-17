#include <iostream>

// Write a program that reads 2 variables num1 and num2
// Target: we want swap the values of Num1 and Num2

int main() {
    int num1, num2, temp;
    std::cin >> num1 >> num2;
    temp = num1, num1 = num2, num2 = temp;
    std::cout << num1 << ' ' << num2 << std::endl;
    return 0;
}