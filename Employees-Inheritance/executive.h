/**
 * @file executive.h
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief 
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "manager.h"
#include <string>

class Executive : public Manager {
private:
    std::string region;

public:
    Executive(const std::string& executiveName, double executiveSalary, int executiveTeamSize, const std::string& executiveRegion);

    void displayInfo() const override;
    double calculateBonus() const override;
};

#endif // EXECUTIVE_H