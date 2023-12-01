#include <iostream>

int main() {
    int N, input, count = 0, arr[1000];
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        if (i) {
            if (input == arr[i - 1]) {
                N--;
                i--;
            } else {
                arr[i] = input;
                count++;
            }
        } else {
            arr[i] = input;
        }
    }
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}