#include <iostream>

int main() {
    int num;
    std::cin >> num;
    while (num) {
        int iterator = num;
        while (iterator--)
            std::cout << '*';
        std::cout << std::endl;
        num--;
    }
    return 0;
}