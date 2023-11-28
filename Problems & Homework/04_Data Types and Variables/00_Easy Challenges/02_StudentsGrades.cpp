#include <iostream>

// Write a program that reads 2 students information about math exam

int main() {
    std::string student1_name;
    int student1_id;
    double student1_grade;

    std::string student2_name;
    int student2_id;
    double student2_grade;

    std::cout << "What is student 1 name: ";
    std::cin >> student1_name;
    std::cout << "His id: ";
    std::cin >> student1_id;
    std::cout << "His math exam grade: ";
    std::cin >> student1_grade;

    std::cout << "What is student 2 name: ";
    std::cin >> student2_name;
    std::cout << "His id: ";
    std::cin >> student2_id;
    std::cout << "His math exam grade: ";
    std::cin >> student2_grade;

    std::cout << "\nStudents grades in math" << std::endl
              << student1_name << " (with id " << student1_id
              << ") got grade: " << student1_grade << std::endl;

    std::cout << student2_name << " (with id " << student2_id
              << ") got grade: " << student2_grade << std::endl;

    std::cout << "Average grade is " << (student1_grade + student2_grade) / 2
              << std::endl;
    return 0;
}