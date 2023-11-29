#include <iostream>

// Assume a year is 12 months, but each month is 30 days
// Read an integer: whole number of days of someone age. Print 3 numbers
// That is a year has 12 * 30 = 360 days
// Total years     total months     remaining days

int main() {
    int num;
    std::cin >> num;
    int t_years, t_months, t_days;
    // t_years = 0;
    // while (num >= 360) {
    //     t_years++;
    //     num -= 360;
    // }
    // t_months = 0;
    // while (num >= 30) {
    //     t_months++;
    //     num -= 30;
    // }
    // t_days = num;
    t_years = num / 360;
    num %= 360;
    t_months = num / 30;
    num %= 30;
    t_days = num;
    std::cout << t_years << ' ' << t_months << ' ' << t_days << std::endl;
    return 0;
}