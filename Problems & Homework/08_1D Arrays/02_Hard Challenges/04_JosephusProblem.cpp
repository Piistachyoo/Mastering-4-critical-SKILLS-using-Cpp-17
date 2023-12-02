#include <iostream>

int main() {
    int N, K, arr[10]{0};
    std::cin >> N >> K;
    for (int i = 0; i < N; i++) {
        arr[i] = 1;
    }
    int index = 0;
    int removed, i;
    std::cout << "People removed in order: ";
    for (int count = 0; count < N; count++) {
        for (i = 1, removed = (index + K - 1) % N; i < K;
             i++, ((removed += 1) % N)) {
            while (arr[removed] == 0)
                removed++, removed %= N;
        }
        removed--;
        arr[removed] = 0;
        std::cout << removed + 2 << ' ';
        if (count == (N - 1)) {
            // std::cout << index;
            break;
        }
        int new_index = (index + K) % N;
        while (arr[new_index] == 0)
            new_index++, new_index %= N;
        index = new_index;
    }
    /*
    int count = N;
    while (count) {
        int temp;
        for (int i = 1; i < K; i++) {
            temp = (index + 1) % N;
            while (arr[temp] == 0)
                temp++, temp %= N;
            arr[temp] = 0;
            std::cout << temp + 1 << ' ';
            count--;
        }
        index = (temp + 1) % N;
        if (count == 1) {
            std::cout << index + 1 << std::endl;
            break;
        }
        index = (index + 1) % N;
        while (arr[index] == 0)
            index++, index %= N;
    }
    */
    return 0;
}