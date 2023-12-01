#include <iostream>

int main() {
    int N, found_flag;
    std::cin >> N;
    for (int i = 2; i < N; i++) {
        found_flag = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0 && i != j) {
                found_flag = 1;
                break;
            }
        }
        if (!found_flag)
            std::cout << i << ", ";
    }
    std::cout << "\b\b" << ' ' << std::endl;
    return 0;
}