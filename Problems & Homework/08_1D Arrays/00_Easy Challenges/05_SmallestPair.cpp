#include <iostream>

int main() {
    int N, A[200], min = INT32_MAX;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] + j - i < min)
                min = A[i] + A[j] + j - i;
        }
    }
    std::cout << min << std::endl;
    return 0;
}