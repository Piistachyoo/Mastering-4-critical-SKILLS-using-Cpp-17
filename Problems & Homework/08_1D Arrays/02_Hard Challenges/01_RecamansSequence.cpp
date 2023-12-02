#include <iostream>

int main() {
    int freq[200 * 10]{0};
    int arr[201]{0};
    int index;
    std::cin >> index;
    for (int i = 1; i <= index; i++) {
        int temp = arr[i - 1] - (i - 1) - 1;
        if (temp < 0 || freq[temp])
            temp = arr[i - 1] + (i - 1) + 1;
        arr[i] = temp;
        freq[temp] = 1;
    }
    std::cout << arr[index] << std::endl;
    return 0;
}