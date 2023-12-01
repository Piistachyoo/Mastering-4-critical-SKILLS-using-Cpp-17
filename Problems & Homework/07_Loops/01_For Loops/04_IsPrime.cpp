#include <iostream>

int main() {
    int N, found_flag = 0;
    std::cin >> N;
    for (int i = 2; i < N / 2; i++) {
        if (N % i == 0 && N != i) {
            found_flag = 1;
            break;
        }
    }
    if (found_flag)
        std::cout << "NO" << std::endl;
    else
        std::cout << "YES" << std::endl;
    return 0;
}