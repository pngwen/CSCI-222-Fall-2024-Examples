/**
 * @file executive.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Implementation of the executive class.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "executive.h"
#include <iostream>

Executive::Executive(const std::string& executiveName, double executiveSalary, int executiveTeamSize, const std::string& executiveRegion)
    : Manager(executiveName, executiveSalary, executiveTeamSize), region(executiveRegion) {}

void Executive::displayInfo() const {
    std::cout << "Executive: " << name << "\nSalary: $" << salary
              << "\nTeam Size: " << getTeamSize()
              << "\nRegion: " << region << std::endl;
}

double Executive::calculateBonus() const {
    return salary * 0.30;
}