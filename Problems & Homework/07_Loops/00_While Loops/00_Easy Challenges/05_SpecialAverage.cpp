#include <iostream>

int main() {
    int N, temp_N, input, sum_even = 0, sum_odd = 0;
    std::cin >> N;
    temp_N = N;
    while (N) {
        std::cin >> input;
        if (N % 2 == 0)
            sum_even += input;
        else
            sum_odd += input;
        N--;
    }
    std::cout << (sum_even / (static_cast<double>(temp_N) / 2)) << ' '
              << (sum_odd / (static_cast<double>(temp_N) / 2)) << std::endl;
    return 0;
}