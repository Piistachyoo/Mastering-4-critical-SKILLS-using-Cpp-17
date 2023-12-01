#include <iostream>

int main() {
    int arr[900];
    int freq[500]{0};
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];

        if (freq[arr[i]]++ == 0) {
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << std::endl;
}