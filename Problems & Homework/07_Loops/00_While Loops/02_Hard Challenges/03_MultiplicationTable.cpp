#include <iostream>

int main() {
    int max_first, max_second, i, j;
    std::cin >> max_first >> max_second;
    i = 1;
    while (i <= max_first) {
        j = 1;
        while (j <= max_second) {
            std::cout << i << " x " << j << " = " << i * j << std::endl;
            j++;
        }
        i++;
    }
    return 0;
}