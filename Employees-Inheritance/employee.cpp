/**
 * @file employee.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Class implementation of employee.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "employee.h"
#include <iostream>

Employee::Employee(const std::string& employeeName, double employeeSalary)
    : name(employeeName), salary(employeeSalary) {}

void Employee::displayInfo() const {
    std::cout << "Employee: " << name << "\nSalary: $" << salary << std::endl;
}

double Employee::calculateBonus() const {
    return salary * 0.10;
}

std::string Employee::getName() const {
    return name;
}

double Employee::getSalary() const {
    return salary;
}