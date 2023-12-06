#include <iostream>

int main() {
    int N, M, Q, sum1, sum2, q1, q2;
    int arr[10][10];
    std::cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            std::cin >> arr[i][j];
    std::cin >> Q;
    while (Q--) {
        sum1 = 0;
        sum2 = 0;
        std::cin >> q1 >> q2;
        for (int j = 0; j < M; j++)
            sum1 += arr[q1 - 1][j], sum2 += arr[q2 - 1][j];
        if (sum1 < sum2)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}
