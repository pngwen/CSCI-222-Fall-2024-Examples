
#include <iostream>
#include <iomanip>
#include "menu.h"

using namespace std;

// helper function prototypes
static void displayMenu(const vector<string> &names, const string &title);
static int getChoice(const vector<string> &names);

/**
 * @brief Construct a new Menu object
 * 
 */
Menu::Menu() : Menu("MENU") 
{
    // this is just delegated
}


Menu::Menu(const std::string &title) 
{
    this->title = title;
}


/**
 * @brief Destroy the Menu object
 * 
 */
Menu::~Menu()
{
    // nothing to destroy
}

/**
 * @brief Execute the menu
 * 
 */
void Menu::execute() 
{
    bool valid = false;
    int choice;

    do {
        displayMenu(names);
        choice = getInput(names);
        if(choice != -1) {
            valid = true;
        } else {
            cout << "Invalid selection. Please try again." << endl;
        }
    } while(not valid);

    // execute the user selection.
    actions[choice].execute();
}


/**
 * @brief Add an item to the menu.
 * 
 * @param name 
 * @param action 
 */
void Menu::addItem(const std::string &name, Command &action)
{
    labels.push_back(name);
    actions.push_back(action);
}


// make a nicely formatted menu
static void displayMenu(const vector<string> &names, const string &title)
{
    // display the title
    cout << setfill(' ') << setw(6) << "" << title << endl;

    for(int i=0; i<names.size(); i++) {
        cout << setw(3) << i+1 << ".) " << names[i] << endl;
    }
}

// attempt to get the user's choice
static int getChoice(const vector<string> &names)
{
    int minChoice = 1;
    int maxChoice = names.size();
    int choice;

    // get the choice
    cout << "Choice? ";
    cin >> choice;

    //validate the choice
    if(choice < minChoice or choice > maxChoice){
        return -1;
    }

    //return the index
    return choice-1;
}