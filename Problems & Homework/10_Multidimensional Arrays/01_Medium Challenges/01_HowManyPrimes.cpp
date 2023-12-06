#include <iostream>

int main() {
    int N, M, Q, i, j, r, c, count;
    std::cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            std::cin >> arr[i][j];

    std::cin >> Q;
    while (Q--) {
        std::cin >> i >> j >> r >> c;
        bool is_prime;
        count = 0;
        for (int row = i; row < r + i; row++)
            for (int col = j; col < c + j; col++) {
                if (arr[row][col] == 1) {

                } else {
                    is_prime = true;
                    for (int hamada = 2; hamada <= arr[row][col]; hamada++) {
                        if (arr[row][col] % hamada == 0 &&
                            hamada != arr[row][col]) {
                            is_prime = false;
                            break;
                        }
                    }
                    if (is_prime)
                        count++;
                }
            }
        std::cout << count << std::endl;
    }
    return 0;
}
/*3 4
8 2 9 5
3 2 27 6
7 8 29 22
2
1 0 2 2
0
0 1 2 3
3*/