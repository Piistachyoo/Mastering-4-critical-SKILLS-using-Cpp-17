#include <iostream>

int main() {
    int depth, rows, cols, input, in1, in2, in3;
    std::cin >> depth >> rows >> cols;
    while (1) {
        std::cin >> input;
        if (input == 1) {
            std::cin >> in1 >> in2 >> in3;
            std::cout << (in3 + (in2 * cols) + (in1 * rows * cols))
                      << std::endl;
        } else {
            std::cin >> input;
            in1 = 0;
            in2 = 0;
            in3 = 0;
            in1 = input / (rows * cols);
            input %= (rows * cols);
            in2 = input / (cols);
            input %= cols;
            in3 = input;
            std::cout << in1 << ' ' << in2 << ' ' << in3 << std::endl;
        }
    }
    return 0;
}