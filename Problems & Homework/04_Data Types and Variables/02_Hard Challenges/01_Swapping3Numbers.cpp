#include <iostream>

// Write a code to swap 3 numbers

int main() {
    int n1, n2, n3, temp;
    std::cin >> n1 >> n2 >> n3;

    temp = n1;
    n1 = n2;
    n2 = n3;
    n3 = temp;

    std::cout << n1 << ' ' << n2 << ' ' << n3 << std::endl;
    return 0;
}