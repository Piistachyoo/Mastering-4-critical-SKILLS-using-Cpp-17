#include <iostream>

int main() {
    bool player = false; // player x = false, player o = true
    int zero_count;
    int x, y;
    int N;
    std::cin >> N;
    int arr[10][10]{0};
    while (1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (arr[i][j] == 0)
                    std::cout << '.';
                else if (arr[i][j] == 1)
                    std::cout << 'x';
                else if (arr[i][j] == 2)
                    std::cout << 'o';
            }
            std::cout << std::endl;
        }

        if (player == false) { // Player x
        go_back_x:
            std::cout << "Player x turn. Enter empty location (r, c): ";
            std::cin >> x >> y;
            if (x > N || x < 1 || y > N || y < 1 || arr[x - 1][y - 1] != 0) {
                std::cout << "Invalid input. Try again" << std::endl;
                goto go_back_x;
            }
            arr[x - 1][y - 1] = 1;
        } else { // Player o
        go_back_y:
            std::cout << "Player o turn. Enter empty location (r, c): ";
            std::cin >> x >> y;
            if (x > N || x < 1 || y > N || y < 1) {
                std::cout << "Invalid input. Try again" << std::endl;
                goto go_back_y;
            }
            arr[x - 1][y - 1] = 2;
        }

        if ((arr[0][0] && (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])) ||
            (arr[1][0] && (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])) ||
            (arr[2][0] && (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])) ||

            (arr[0][0] && (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])) ||
            (arr[0][1] && (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])) ||
            (arr[0][2] && (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])) ||

            (arr[0][0] && (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])) ||
            (arr[2][0] && (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2]))) {
            if (player) {
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++) {
                        if (arr[i][j] == 0)
                            std::cout << '.';
                        else if (arr[i][j] == 1)
                            std::cout << 'x';
                        else if (arr[i][j] == 2)
                            std::cout << 'o';
                    }
                    std::cout << std::endl;
                }
                std::cout << "Player o won" << std::endl;
            } else {
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++) {
                        if (arr[i][j] == 0)
                            std::cout << '.';
                        else if (arr[i][j] == 1)
                            std::cout << 'x';
                        else if (arr[i][j] == 2)
                            std::cout << 'o';
                    }
                    std::cout << std::endl;
                }
                std::cout << "Player x won" << std::endl;
            }
            break;
        }

        zero_count = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (!arr[i][j])
                    zero_count++;

        if (zero_count == 0) {
            std::cout << "Game is tied" << std::endl;
            break;
        }
        player ^= 1;
    }
    return 0;
}