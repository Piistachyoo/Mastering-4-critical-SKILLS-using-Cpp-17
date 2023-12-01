#include <chrono>
#include <iostream>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    int count = 0;
    for (int a = 1; a <= 200; a++)
        for (int b = 1; b <= 200; b++)
            for (int c = 1; c <= 200; c++)
                if (((a + b - c) <= 200) && ((a + b - c) >= 1))
                    count++;
    // for (int d = 1; d <= 200; d++)
    //     if (a + b == c + d)
    //         count++;
    std::cout << count << std::endl;
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << duration.count() << std::endl;
    return 0;
}