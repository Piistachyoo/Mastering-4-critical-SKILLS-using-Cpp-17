#include <iostream>

int main() {
    int K, N, arr[200]{0}, max_index, max_val = INT32_MIN;
    std::cin >> K >> N;
    for (int i = 1; i <= N; i++) {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < K; i++) {
        sum += arr[i];
    }
    max_val = sum, max_index = 0;
    for (int i = K; i < N; i++) {
        sum = sum - arr[i - K] + arr[i];
        if (max_val < sum) {
            max_val = sum;
            max_index = i - (K - 1);
        }
    }
    std::cout << max_index << ' ' << max_index + K - 1 << ' ' << ' ' << max_val
              << std::endl;
    // for (int i = 0; (i + K - 1) < N; i++) {
    //     int sum = 0;
    //     for (int j = i; j < i + K; j++) {
    //         sum += arr[j];
    //     }
    //     if (max_val < sum) {
    //         max_val = sum;
    //         max_index = i;
    //     }
    // }
    // std::cout << max_index << ' ' << max_index + K - 1 << ' ' << max_val
    //           << std::endl;
    return 0;
}