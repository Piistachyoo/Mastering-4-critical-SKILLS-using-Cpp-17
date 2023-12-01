#include <iostream>

int main() {
    int N;
    int arr[200];
    int freq[10]{0};
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        int temp = arr[i];
        while (temp) {
            freq[(temp % 10)]++;
            temp /= 10;
        }
    }
    for (int i = 0; i < 10; i++) {
        std::cout << i << ' ' << freq[i] << std::endl;
    }
    return 0;
}