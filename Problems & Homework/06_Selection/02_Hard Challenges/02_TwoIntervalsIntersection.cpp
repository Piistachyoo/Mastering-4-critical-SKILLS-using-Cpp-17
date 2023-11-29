#include <iostream>

int main() {
    int s1, e1, s2, e2, is, ie;
    std::cin >> s1 >> e1 >> s2 >> e2;
    if ((e1 < s2) || (e2 < s1)) {
        std::cout << -1 << std::endl;
    } else {
        if (s1 > s2)
            is = s1;
        else
            is = s2;
        if (e1 < e2)
            ie = e1;
        else
            ie = e2;
        std::cout << is << ' ' << ie << std::endl;
    }
    return 0;
}