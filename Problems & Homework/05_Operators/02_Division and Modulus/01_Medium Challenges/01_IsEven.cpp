#include <iostream>

/*
 * Find if the number is even:
 *  Using only %2
 *  Using only /2
 *  Using only %10
 */

int main() {
    int num;
    std::cin >> num;

    // Using only %2
    bool is_even1 = num % 2;
    std::cout << "Using %2: " << std::boolalpha << !is_even1 << std::endl;

    // Using only /2
    bool is_even2 = (static_cast<double>(num) / 2) == (num / 2);
    std::cout << "Using /2: " << std::boolalpha << is_even2 << std::endl;

    // Using only %10
    bool is_even3 = (num % 10 == 0) || (num % 10 == 2) || (num % 10 == 4) ||
                    (num % 10 == 6) || (num % 10 == 8);
    std::cout << "Using %10: " << std::boolalpha << is_even3 << std::endl;

    return 0;
}