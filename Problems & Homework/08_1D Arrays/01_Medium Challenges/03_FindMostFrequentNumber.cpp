#include <iostream>

int main() {
    int N, input, max, index;
    std::cin >> N;
    int freq[770] = {0};
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        freq[input + 500]++;
    }
    max = freq[0];
    index = 0;
    for (int i = 1; i < 770; i++) {
        if (max < freq[i]) {
            max = freq[i];
            index = i;
        }
    }
    std::cout << index - 500 << std::endl;
    return 0;
}