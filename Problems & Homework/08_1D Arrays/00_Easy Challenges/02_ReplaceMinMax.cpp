#include <iostream>

int main() {
    int N, arr[200], min_val, min_index, max_val, max_index;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        if (!i) {
            min_val = arr[i];
            min_index = i;
            max_val = arr[i];
            min_index = i;
        } else {
            if (arr[i] < min_val) {
                min_val = arr[i];
                min_index = i;
            } else if (arr[i] > max_val) {
                max_val = arr[i];
                max_index = i;
            }
        }
    }
    arr[min_index] = max_val;
    arr[max_index] = min_val;
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}