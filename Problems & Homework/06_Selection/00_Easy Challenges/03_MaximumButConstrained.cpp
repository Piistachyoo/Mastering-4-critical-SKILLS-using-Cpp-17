#include <iostream>

int main() {
    int n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;
    int minimum = -1;

    if (n1 < 100 && n1 > minimum)
        minimum = n1;

    if (n2 < 100 && n2 > minimum)
        minimum = n2;

    if (n3 < 100 && n3 > minimum)
        minimum = n3;

    std::cout << minimum << std::endl;

    return 0;
}