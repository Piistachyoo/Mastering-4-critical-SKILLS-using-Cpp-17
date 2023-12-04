#include <iostream>

int main() {
    const int employees_max = 10;
    int index, user_input = 1;
    bool emp_isAvailable[employees_max]{0};
    std::string emp_names[employees_max];
    int emp_ages[employees_max]{0};
    int emp_salaries[employees_max]{0};
    bool emp_gender[employees_max]{0};

    while (user_input) {
        std::cout << "\nEnter your choice:" << std::endl
                  << "1) Add new employee" << std::endl
                  << "2) Print all employees" << std::endl
                  << "3) Delete by age" << std::endl
                  << "4) Update salary by name" << std::endl
                  << "0) Exit program" << std::endl;

        std::cin >> user_input;

        if (0 == user_input)
            return 0;
        else if (1 == user_input) {
            bool space_available = false;
            for (index = 0; index < employees_max; index++) {
                if (emp_isAvailable[index] == 0) {
                    space_available = true;
                    break;
                }
            }
            if (space_available) {
                char temp;
                emp_isAvailable[index] = true;
                std::cout << "Enter name: ";
                std::cin >> emp_names[index];
                std::cout << "Enter age: ";
                std::cin >> emp_ages[index];
                std::cout << "Enter salary: ";
                std::cin >> emp_salaries[index];
                std::cout << "Enter gender (M/F): ";
                std::cin >> temp;
                if (temp == 'f') {
                    emp_gender[index] = true;
                } else {
                    emp_gender[index] = false;
                }
            } else {
                std::cout
                    << "\tERROR: Cannot add new employee, storage is full!"
                    << std::endl;
            }
        } else if (2 == user_input) {
            std::cout << "***********************************" << std::endl;
            bool there_is_employee = false;
            for (index = 0; index < employees_max; index++) {
                if (emp_isAvailable[index]) {
                    there_is_employee = true;
                    std::cout << emp_names[index] << ' ' << emp_ages[index]
                              << ' ' << emp_salaries[index] << ' ';
                    if (emp_gender)
                        std::cout << 'F' << std::endl;
                    else
                        std::cout << 'M' << std::endl;
                }
            }
            if (!there_is_employee)
                std::cout << "\tERROR: No employees found!" << std::endl;
        } else if (3 == user_input) {
            int lower_age, upper_age;
            std::cout << "Enter start and end age: " << std::endl;
            std::cin >> lower_age >> upper_age;
            for (index = 0; index < employees_max; index++) {
                if (emp_ages[index] >= lower_age &&
                    emp_ages[index] <= upper_age) {
                    emp_isAvailable[index] = false;
                    emp_names[index] = "";
                    emp_ages[index] = 0;
                    emp_salaries[index] = 0;
                }
            }
        } else if (4 == user_input) {
            bool is_found = false;
            std::string search_string;
            int new_salary;
            std::cout << "Enter the name and salary: ";
            std::cin >> search_string >> new_salary;
            for (index = 0; index < employees_max; index++) {
                if (emp_names[index] == search_string) {
                    is_found = true;
                    break;
                }
            }
            if (is_found) {
                emp_salaries[index] = new_salary;
                std::cout << "Salary updated for " << emp_names[index]
                          << std::endl;
            } else
                std::cout << "\tERROR: Couldn't find " << search_string
                          << std::endl;
        } else {
            std::cout << "\tERROR: Invalid input." << std::endl;
        }
    }
    return 0;
}