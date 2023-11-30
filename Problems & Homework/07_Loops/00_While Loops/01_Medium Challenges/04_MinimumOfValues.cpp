#include <iostream>

int main() {
    int T, N, input, minimum, inner_iterator, iterator = 0;
    std::cin >> T;
    while (iterator < T) {
        std::cin >> N;
        std::cin >> input;
        minimum = input;
        inner_iterator = 1;
        while (inner_iterator < N) {
            std::cin >> input;
            if (minimum > input)
                minimum = input;
            inner_iterator++;
        }
        std::cout << minimum << std::endl;
    }
    return 0;
}