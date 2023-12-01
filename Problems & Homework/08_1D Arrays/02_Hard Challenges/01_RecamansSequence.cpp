#include <iostream>

int main() {
    int freq[200]{0};
    freq[0] = 1, freq[1] = 1, freq[3] = 1, freq[6] = 1, freq[2] = 1,
    freq[7] = 1;
    int arr[200]{0, 1, 3, 6, 2, 7};
    int index = 5;
    while (index < 19) {

        if (int temp = arr[index] - index - 1;
            (temp > 0) && (freq[temp] == 0)) {
            index++;
            arr[index] = temp;
            freq[temp] = 1;
        } else if (int temp = arr[index] + index + 1; (temp > 0)) {
            index++;
            arr[index] = temp;
            freq[temp] = 1;
        }
    }
    for (int i = 0; i < 19; i++) {
        if (i)
            std::cout << ", ";
        std::cout << arr[i];
    }
    std::cout << std::endl;
    return 0;
}