#include <iostream>

int main() {
    int count = 0;
    for (int y = 70; y <= 400; y++) {
        for (int x = 50; (x <= 300) && (x < y); x++) {
            if ((x + y) % 7 == 0) {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}