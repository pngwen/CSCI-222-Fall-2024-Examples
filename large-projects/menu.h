/**
 * @file menu.h
 * @author your name (you@domain.com)
 * @brief Definition of a simple menu object
 * @version 0.1
 * @date 2024-11-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <string>
#include <vector>
#include "command.h"

#ifndef MENU_H
#define MENU_H

class Menu : public Command
{
public:
    /**
     * @brief Construct a new Menu object
     * 
     */
    Menu();
    Menu(const std::string &title);


    /**
     * @brief Destroy the Menu object
     * 
     */
    virtual ~Menu();

    /**
     * @brief Execute the menu
     * 
     */
    virtual void execute() override;


    /**
     * @brief Add an item to the menu.
     * 
     * @param name 
     * @param action 
     */
    virtual void addItem(const std::string &name, Command &action);

private:
    std::string title;
    std::vector<std::string> labels;
    std::vector<Command&> actions;
};

#endif