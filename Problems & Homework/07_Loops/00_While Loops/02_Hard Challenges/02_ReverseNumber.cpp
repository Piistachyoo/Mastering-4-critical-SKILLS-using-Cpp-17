#include <iostream>

int main() {
    int num, reversed_num = 0;
    std::cin >> num;
    while (num) {
        reversed_num += num % 10;
        reversed_num *= 10;
        num /= 10;
    }
    reversed_num /= 10;
    std::cout << reversed_num << ' ' << reversed_num * 3 << std::endl;
    return 0;
}