#include <iostream>
#include <sstream>

int main() {
    std::string str;
    std::cin >> str;
    std::stringstream stream;
    stream << str[0];
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != str[i - 1]) {
            stream << ' ';
        }
        stream << str[i];
    }
    str = stream.str();
    std::cout << str << std::endl;
    return 0;
}