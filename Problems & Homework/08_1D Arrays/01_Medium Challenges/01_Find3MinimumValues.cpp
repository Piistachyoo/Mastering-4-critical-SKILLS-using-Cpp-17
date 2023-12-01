#include <iostream>

int main() {
    int N, input, min[3];
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        if (i < 3) {
            min[i] = input;
        } else {
            int max_pos = 0;
            for (int j = 1; j < 3; j++) {
                if (min[max_pos] < min[j]) {
                    max_pos = j;
                }
            }
            if (input < min[max_pos]) {
                min[max_pos] = input;
            }
        }
    }
    while ((min[0] > min[1]) || (min[0] > min[2]) || (min[1] > min[2])) {
        int max_pos = 0;
        for (int i = 1; i < 3; i++) {
            if (min[max_pos] < min[i]) {
                max_pos = i;
            }
        }
        int temp = min[2];
        min[2] = min[max_pos];
        min[max_pos] = temp;
    }

    std::cout << min[0] << ' ' << min[1] << ' ' << min[2] << std::endl;
    return 0;
}