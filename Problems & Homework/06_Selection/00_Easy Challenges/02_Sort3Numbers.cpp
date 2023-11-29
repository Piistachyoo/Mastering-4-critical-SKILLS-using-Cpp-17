#include <iostream>

int main() {
    int n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;

    if (n1 < n2) {
        if (n1 < n3) {
            std::cout << n1 << ' ';
            if (n2 < n3) {
                std::cout << n2 << ' ' << n3 << std::endl;
            } else {
                std::cout << n3 << ' ' << n2 << std::endl;
            }
        } else {
            std::cout << n3 << ' ' << n1 << ' ' << n2 << std::endl;
        }
    } else {
        if (n2 < n3) {
            std::cout << n2 << ' ';
            if (n1 < n3) {
                std::cout << n1 << ' ' << n3 << std::endl;
            } else {
                std::cout << n3 << ' ' << n1 << std::endl;
            }
        } else {
            std::cout << n3 << ' ' << n2 << ' ' << n1 << std::endl;
        }
    }

    return 0;
}