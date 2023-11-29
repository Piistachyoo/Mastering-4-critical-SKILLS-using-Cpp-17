#include <iostream>

// Write a program that reads 3 integers about the class room
// Number of boys (nb), number of girls (ng), number of teachers (nt)

int main() {
    int nb, ng, nt;
    std::cin >> nb >> ng >> nt;
    std::cout << std::boolalpha << (nb > 25) << std::endl;
    std::cout << std::boolalpha << (ng <= 30) << std::endl;
    std::cout << std::boolalpha
              << ((nb > 20) && (nt > 2) || (ng > 30) && (nt > 4)) << std::endl;
    std::cout << std::boolalpha << ((nb < 60) || (ng < 70)) << std::endl;
    std::cout << std::boolalpha << (!(nb >= 60) && !(ng >= 70)) << std::endl;
    std::cout << std::boolalpha << ((nb - ng) > 10) << std::endl;
    std::cout << std::boolalpha << (((nb - ng) > 10) || (nt > 5)) << std::endl;
    return 0;
}