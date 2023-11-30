#include <iostream>

int main() {
    int N, iterator = 0;
    std::cin >> N;
    while (iterator <= N) {
        if ((iterator % 8 == 0) ||
            ((iterator % 4 == 0) && (iterator % 3 == 0))) {
            std::cout << iterator << ' ';
        }
        iterator++;
    }
    std::cout << std::endl;
    return 0;
}