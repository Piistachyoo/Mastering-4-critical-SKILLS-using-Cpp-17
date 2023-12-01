#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || N - i - 1 == j)
                std::cout << '*';
            else
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
    // int N, middle_spaces;
    // std::cin >> N;
    // middle_spaces = N - 2;
    // for (int diamond = N; diamond > (N / 2) + 1; diamond--) {
    //     for (int spaces = N; spaces > diamond; spaces--) {
    //         std::cout << ' ';
    //     }
    //     std::cout << '*';
    //     for (int spaces = 0; spaces < middle_spaces; spaces++) {
    //         std::cout << ' ';
    //     }
    //     middle_spaces -= 2;
    //     std::cout << '*' << std::endl;
    // }
    // for (int spaces = 0; spaces < N / 2; spaces++) {
    //     std::cout << ' ';
    // }
    // std::cout << '*' << std::endl;
    // middle_spaces += 2;
    // for (int diamond = N / 2; diamond > 0; diamond--) {
    //     for (int spaces = 0; spaces < diamond - 1; spaces++) {
    //         std::cout << ' ';
    //     }
    //     std::cout << '*';
    //     for (int spaces = 0; spaces < middle_spaces; spaces++) {
    //         std::cout << ' ';
    //     }
    //     middle_spaces += 2;
    //     std::cout << '*' << std::endl;
    // }
    return 0;
}