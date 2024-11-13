/**
 * @file menuTest.cpp
 * @brief Testing the menu class
 * @version 0.1
 * @date 2024-11-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <exception>
#include <iostream>
#include "menu.h"
#include "command.h"

using namespace std;

class Quit : public Command 
{
    virtual void execute();
};

int main()
{
    Menu mainMenu;
    Menu submenuA{"Submenu A"};
    Menu submenuB{"Submneu B"};
    Quit quit;

    // have our first menu
    mainMenu.addItem("Menu A", submenuA);
    mainMenu.addItem("Menu B", submenuB);
    mainMenu.addItem("Quit", quit);

    // have our second menu
    submenuA.addItem("Menu B", submenuB);
    submenuA.addItem("Main Menu", mainMenu);

    // our thrid menu
    submenuB.addItem("Menu A", submenuA);
    submenuB.addItem("Main Menu", mainMenu);

    try {
        mainMenu.execute();
    } catch(runtime_error &e) { 
        cerr << "Runtime error " << e.what() << endl;
    }
}


void Quit::execute()
{
    // do nothing
}