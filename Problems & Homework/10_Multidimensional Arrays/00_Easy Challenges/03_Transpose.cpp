#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            std::cin >> arr[i][j];

    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}