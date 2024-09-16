/**
 * @file manager.cpp
 * @author Bob Lowe 
 * @brief Implementation of the manager class.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "manager.h"
#include <iostream>

Manager::Manager(const std::string& managerName, double managerSalary, int managerTeamSize)
    : Employee(managerName, managerSalary), teamSize(managerTeamSize) {}

void Manager::displayInfo() const {
    std::cout << "Manager: " << name << "\nSalary: $" << salary
              << "\nTeam Size: " << teamSize << std::endl;
}

double Manager::calculateBonus() const {
    return salary * 0.20;
}

int Manager::getTeamSize() const {
    return teamSize;
}