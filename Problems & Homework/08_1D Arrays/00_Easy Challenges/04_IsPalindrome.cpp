#include <iostream>

int main() {
    int N, arr[1000];
    bool is_palindrome = true;
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    std::cout << std::boolalpha << is_palindrome;
    return 0;
}