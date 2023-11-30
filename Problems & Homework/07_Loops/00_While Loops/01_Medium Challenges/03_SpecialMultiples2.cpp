#include <iostream>

int main() {
    int N, iterator = 0, n_found = 0;
    std::cin >> N;
    while (n_found < N) {
        if ((iterator % 3 == 0) && (iterator % 4 != 0)) {
            std::cout << iterator << ' ';
            n_found++;
        }
        iterator++;
    }
    std::cout << std::endl;
    return 0;
}