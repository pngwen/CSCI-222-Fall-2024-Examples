/**
 * @file employee.h
 * @author Bob Lowe <rlowe8@utm.edu
 * @brief Class definition of a simple employee class.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    double salary;

public:
    Employee(const std::string& employeeName, double employeeSalary);

    virtual void displayInfo() const;
    virtual double calculateBonus() const;

    std::string getName() const;
    double getSalary() const;
};

#endif // EMPLOYEE_H