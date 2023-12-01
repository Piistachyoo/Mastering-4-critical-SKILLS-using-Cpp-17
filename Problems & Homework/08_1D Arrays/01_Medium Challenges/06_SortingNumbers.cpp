#include <iostream>

int main() {
    int freq[500]{0}, N, input;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        freq[input]++;
    }
    for (int i = 0; i < 500; i++) {
        for (int j = 0; j < freq[i]; j++) {
            std::cout << i << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}