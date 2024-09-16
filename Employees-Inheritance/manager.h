/**
 * @file manager.h
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Class definition of a simple manager class.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const std::string& managerName, double managerSalary, int managerTeamSize);

    void displayInfo() const override;
    double calculateBonus() const override;
    int getTeamSize() const;
};

#endif // MANAGER_H