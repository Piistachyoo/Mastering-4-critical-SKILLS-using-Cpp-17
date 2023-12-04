#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    int carry = 0;
    int add_counter = 4;
    for (int i = str.length() - 1; i >= 0; i--) {
        int temp_num = str[i] - '0';
        if (add_counter) {
            add_counter--;
            temp_num += 5;
        }
        temp_num += carry;
        carry = 0;
        while (temp_num >= 10) {
            carry += 1;
            temp_num -= 10;
        }
        str[i] = temp_num + '0';
        if (i == 0 && carry) {
            str[i] += carry;
        }
    }
    std::cout << str << std::endl;
    return 0;
}