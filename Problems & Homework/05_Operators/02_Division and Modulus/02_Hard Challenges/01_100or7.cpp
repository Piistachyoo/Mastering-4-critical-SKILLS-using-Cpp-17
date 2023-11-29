#include <iostream>

// Write a program that reads an integer and print 100 if number is even or 7 if
// number is odd

int main() {
    int num;
    std::cin >> num;
    bool is_even = (num % 2 == 0);
    bool is_odd = 1 - is_even;
    std::cout << is_even * 100 + is_odd * 7 << std::endl;
    return 0;
}