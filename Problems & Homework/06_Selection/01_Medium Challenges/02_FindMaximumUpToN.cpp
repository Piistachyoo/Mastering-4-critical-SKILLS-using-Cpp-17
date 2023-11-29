#include <iostream>

int main() {
    int N, input, max;
    std::cin >> N;

    std::cin >> input;
    max = input;

    std::cin >> input;
    if (input > max)
        max = input;

    if (N >= 3) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 4) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 5) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 6) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 7) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 8) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 9) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    if (N >= 10) {
        std::cin >> input;
        if (input > max)
            max = input;
    }

    std::cout << max << std::endl;
    return 0;
}