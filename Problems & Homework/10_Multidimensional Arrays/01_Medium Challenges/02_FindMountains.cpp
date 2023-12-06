#include <iostream>

int main() {
    int N, M;
    bool valid_mountain;
    std::cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            std::cin >> arr[i][j];
    //         u, d, l, r, ul, ur, dl, dr
    int di[8]{-1, 1, 0, 0, -1, -1, 1, 1};
    int dj[8]{0, 0, -1, 1, -1, 1, -1, 1};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            valid_mountain = true;
            for (int d = 0; d < 8 && valid_mountain; d++) {
                int dir_i = i + di[d];
                int dir_j = j + dj[d];
                if (dir_i < 0 || dir_i >= N || dir_j < 0 || dir_j >= M)
                    continue;

                if (arr[i][j] <= arr[dir_i][dir_j])
                    valid_mountain = false;
            }
            if (valid_mountain) {
                std::cout << i << ' ' << j << std::endl;
            }
        }
    }
    return 0;
}