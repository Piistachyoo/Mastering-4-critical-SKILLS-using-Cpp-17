#include <iostream>

int main() {
    int N;
    std::string input;
    std::cin >> N;
    int iterator = 0;
    while (iterator < N) {
        std::cin >> input;
        if ((input.length() == 2) &&
            ((input == "no") || (input == "No") || (input == "nO") ||
             (input == "NO") || (input == "on") || (input == "On") ||
             (input == "oN") || (input == "ON"))) {
            std::cout << input << ' ';
        }
        iterator++;
    }
    std::cout << std::endl;
    return 0;
}