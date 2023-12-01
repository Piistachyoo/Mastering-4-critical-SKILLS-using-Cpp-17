#include <iostream>

int main() {
    int N, Q, arr[200], index, input;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    std::cin >> Q;
    while (Q) {
        index = -1;
        std::cin >> input;
        for (int i = 0; i < N; i++) {
            if (arr[i] == input)
                index = i;
        }
        std::cout << index << std::endl;
        Q--;
    }
    return 0;
}