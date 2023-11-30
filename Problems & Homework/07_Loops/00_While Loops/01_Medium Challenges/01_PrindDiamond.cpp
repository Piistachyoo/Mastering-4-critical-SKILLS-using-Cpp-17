#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int iterator = 1;
    int extra_diamond = 0;
    while (iterator <= N) {
        int space_count = N - iterator;
        while (space_count) {
            std::cout << ' ';
            space_count--;
        }
        int diamond_count = iterator + extra_diamond;
        while (diamond_count) {
            std::cout << '*';
            diamond_count--;
        }
        std::cout << std::endl;
        iterator++;
        extra_diamond++;
    }
    iterator--;
    extra_diamond--;
    while (iterator > 0) {
        int space_count = N - iterator;
        while (space_count) {
            std::cout << ' ';
            space_count--;
        }
        int diamond_count = iterator + extra_diamond;
        while (diamond_count) {
            std::cout << '*';
            diamond_count--;
        }
        std::cout << std::endl;
        extra_diamond--;
        iterator--;
    }
    return 0;
}