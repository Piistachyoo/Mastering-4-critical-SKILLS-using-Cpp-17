#include <iostream>

int main() {
    int x, number_of_intervals = 0, s1, e1, s2, e2, s3, e3;
    std::cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    if ((x >= s1) && (x <= e1))
        number_of_intervals++;
    if ((x >= s2) && (x <= e2))
        number_of_intervals++;
    if ((x >= s3) && (x <= e3))
        number_of_intervals++;
    std::cout << number_of_intervals << std::endl;
    return 0;
}