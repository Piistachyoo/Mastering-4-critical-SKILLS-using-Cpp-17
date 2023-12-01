#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int array[N];
    bool is_increasing = true;
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
        if (i) {
            if (array[i] < array[i - 1]) {
                is_increasing = false;
                break;
            }
        }
    }
    if (is_increasing)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}