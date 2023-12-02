#include <iostream>

int main() {
    int arr[200], N, subarrays = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i - 1; j++) {
            bool is_ok = true;
            for (int k = 1; k < i && is_ok; k++) {
                if (arr[j + k] <= arr[j + k - 1])
                    is_ok = false;
            }
            subarrays += is_ok;
        }
    }
    std::cout << subarrays << std::endl;
    return 0;
}