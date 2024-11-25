/**
 * @file counterApplication.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef COUNTER_APPLICATION_H
#define COUNTER_APPLICATION_H
#include <vector>
#include "menu.h"
#include "command.h"

class CounterApplication : public Command
{
/*
- counters : std::vector<CounterUI> 
- main : Menu
- counter : Menu
- counterSelect : Menu
- selected : Counter*
-
+ CounterApplication()
+ execute() : void
 */

private:
    std::vector<CounterUI> counters;
    Menu main;
    Menu counter;
    Menu counterSelect;
    Counter *selected;
};
#endif