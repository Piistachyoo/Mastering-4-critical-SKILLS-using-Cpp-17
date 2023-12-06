#include <iostream>

#define up 1
#define right 2
#define down 3
#define left 4

int main() {
    int N, M, K;
    std::cin >> N >> M;
    int arr[N][M];
    std::cin >> K;
    int x_pos = 0, y_pos = 0;
    int direction, steps;
    while (K--) {
        std::cin >> direction >> steps;
        for (int i = 0; i < steps; i++) {
            switch (direction) {
            case right:
                ++y_pos;
                break;
            case left:
                --y_pos;
                break;
            case up:
                --x_pos;
                break;
            case down:
                ++x_pos;
                break;
            }
            if (x_pos < 0)
                x_pos += N;
            if (x_pos >= N)
                x_pos -= N;
            if (y_pos < 0)
                y_pos += M;
            if (y_pos >= M)
                y_pos -= M;
        }
        std::cout << '(' << x_pos << ", " << y_pos << ')' << std::endl;
    }
    return 0;
}