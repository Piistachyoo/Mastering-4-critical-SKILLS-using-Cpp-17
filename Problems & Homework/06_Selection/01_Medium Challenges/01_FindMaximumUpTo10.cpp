#include <iostream>

int main() {
    int max, input;
    std::cin >> input; // Number 1
    max = input;
    std::cin >> input; // Number 2
    if (input > max)
        max = input;
    std::cin >> input; // Number 3
    if (input > max)
        max = input;
    std::cin >> input; // Number 4
    if (input > max)
        max = input;
    std::cin >> input; // Number 5
    if (input > max)
        max = input;
    std::cin >> input; // Number 6
    if (input > max)
        max = input;
    std::cin >> input; // Number 7
    if (input > max)
        max = input;
    std::cin >> input; // Number 8
    if (input > max)
        max = input;
    std::cin >> input; // Number 9
    if (input > max)
        max = input;
    std::cin >> input; // Number 10
    if (input > max)
        max = input;

    std::cout << max << std::endl;
    return 0;
}