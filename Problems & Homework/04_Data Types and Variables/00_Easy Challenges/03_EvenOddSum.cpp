#include <iostream>

// Given 8 space-separated integers, find the sum of those in even places and
// the sum of those in odd places.

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
    std::cout << (n2 + n4 + n6 + n8) << ' ' << (n1 + n3 + n5 + n7) << std::endl;
    return 0;
}