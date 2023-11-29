#include <iostream>

/*
 * Write a program that reads 5 numbers and print the following:
 *  A) Their average
 *  B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
 *  C) The average of the first 3 numbers divided by the average of the last 2 numbers.
 */

int main() {
    int n1, n2, n3, n4, n5;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int sum = n1 + n2 + n3 + n4 + n5;
    int average = sum / 5;
    std::cout << average << std::endl;
    int sumFirstThree = n1 + n2 + n3;
    int sumLastTwo = n4 + n5;
    std::cout << (static_cast<double>(sumFirstThree) / sumLastTwo) << std::endl;
    std::cout << (static_cast<double>(sumFirstThree) / sumLastTwo) / (3.0 / 2.0)
              << std::endl;

    return 0;
}