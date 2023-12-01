#include <iostream>

int main() {
    int N, A, B, temp_val, digit_sum, result = 0;
    std::cin >> N >> A >> B;
    for (int i = 1; i <= N; i++) {
        temp_val = i;
        digit_sum = 0;
        while (temp_val) {
            digit_sum += temp_val % 10;
            temp_val /= 10;
        }
        if ((digit_sum >= A) && (digit_sum <= B))
            result += i;
    }
    std::cout << result << std::endl;
    return 0;
}