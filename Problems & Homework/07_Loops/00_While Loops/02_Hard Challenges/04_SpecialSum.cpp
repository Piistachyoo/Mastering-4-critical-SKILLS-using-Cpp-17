#include <iostream>

int main() {
    int T, N, input, sum, temp_multiply, iterator_input, iterator_multiply;
    std::cin >> T;
    int iterator_testCases = 0;
    while (iterator_testCases < T) {
        std::cin >> N;
        sum = 0;
        iterator_input = 1;
        while (iterator_input <= N) {
            std::cin >> input;
            iterator_multiply = 0;
            temp_multiply = 1;
            while (iterator_multiply < iterator_input) {
                temp_multiply *= input;
                iterator_multiply++;
            }
            sum += temp_multiply;
            iterator_input++;
        }
        std::cout << sum << std::endl;
        iterator_testCases++;
    }
    return 0;
}