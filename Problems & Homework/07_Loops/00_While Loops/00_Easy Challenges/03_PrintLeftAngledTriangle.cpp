#include <iostream>

int main() {
    int num, iterator = 1;
    std::cin >> num;
    while (iterator <= num) {
        int inner_it = iterator;
        while (inner_it) {
            std::cout << '*';
            inner_it--;
        }
        std::cout << std::endl;
        iterator++;
    }
    return 0;
}