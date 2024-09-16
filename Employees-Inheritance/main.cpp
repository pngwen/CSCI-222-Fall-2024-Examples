/**
 * @file main.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief A small test driver for the employee, manager, and executive classes.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "employee.h"
#include "manager.h"
#include "executive.h"
#include <iostream>

int main() {
    // Create instances of each class
    Employee basicEmployee("John Doe", 50000);
    Manager departmentManager("Jane Smith", 75000, 10);
    Executive regionalExecutive("Alice Johnson", 120000, 50, "North America");

    // Display information for each employee type
    std::cout << "Employee Details:" << std::endl;
    basicEmployee.displayInfo();
    std::cout << "Bonus: $" << basicEmployee.calculateBonus() << "\n" << std::endl;

    std::cout << "Manager Details:" << std::endl;
    departmentManager.displayInfo();
    std::cout << "Bonus: $" << departmentManager.calculateBonus() << "\n" << std::endl;

    std::cout << "Executive Details:" << std::endl;
    regionalExecutive.displayInfo();
    std::cout << "Bonus: $" << regionalExecutive.calculateBonus() << "\n" << std::endl;

    return 0;
}