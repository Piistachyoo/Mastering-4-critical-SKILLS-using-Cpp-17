#include <iostream>

int main() {
    int N, upper_sum = 0, lower_sum = 0;
    std::cin >> N;
    int arr[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> arr[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j <= i; j++)
            upper_sum += arr[i][j];

    for (int i = (N - 1); i >= 0; i--)
        for (int j = (N - 1); j >= i; j--)
            lower_sum += arr[i][j];

    std::cout << upper_sum << std::endl << lower_sum << std::endl;

    return 0;
}