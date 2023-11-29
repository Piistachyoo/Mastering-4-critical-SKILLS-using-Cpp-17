#include <iostream>

int main() {
    int x, n1, n2, n3, n4, n5;
    std::cin >> x >> n1 >> n2 >> n3 >> n4 >> n5;
    int num_equal_less = 0;
    if (n1 <= x)
        num_equal_less++;
    if (n2 <= x)
        num_equal_less++;
    if (n3 <= x)
        num_equal_less++;
    if (n4 <= x)
        num_equal_less++;
    if (n5 <= x)
        num_equal_less++;
    std::cout << num_equal_less << ' ' << 5 - num_equal_less << std::endl;
    return 0;
}