#include <iostream>

/* Write a program that reads 2 integers A, B
   B is either -1 or 1
    ■ If -1, print 2*A+1
    ■ If 1, print A*A */

int main() {
    int A, B;
    std::cin >> A >> B;

    int is_1 = (B + 1) / 2;
    int is_neg_1 = 1 - is_1;

    /* If B = 1, is_1=1 and is_neg_1 = 0
     * If B = -1, is_1 = 0 and is_neg_1 = 1
     * So, it's either 1 * equation + 0 * equation or vice versa
     */
    std::cout << (is_1 * (2 * A + 1)) + (is_neg_1 * (A * A)) << std::endl;
    return 0;
}