/**
 * @file counterApplication.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-12-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "counter.h"
#include "counterApplication.h"
#include "counterUI.h"

CounterApplication::CounterApplication()
{
    running = true;
}

CounterApplication::~CounterApplication()
{
}

void CounterApplication::execute()
{
    while(running) {
        Menu menu("Counter Application Menu");
        Command *command;

        // build the counters into the menu
        for (Counter &counter : counters)
        {
            command = new CounterUI(&counter);
            menu.addItem(counter.getLabel(), *command);
        }

        // add the app commands
        command = new AddCounter(this);
        menu.addItem("Add Counter", *command);
        command = new Quit(this);
        menu.addItem("Quit", *command);

        menu.execute();
    }
}

void CounterApplication::quit()
{
    running = false;
}

CounterApplication::CounterApplicationCommand::CounterApplicationCommand(CounterApplication *app) : app(app)
{
}

CounterApplication::AddCounter::AddCounter(CounterApplication *app) : CounterApplicationCommand(app)
{
}

void CounterApplication::AddCounter::execute()
{
    std::string label;
    std::cout << "Enter the label for the new counter: ";
    std::cin >> label;

    Counter counter(label);
    app->counters.push_back(counter);
}

CounterApplication::Quit::Quit(CounterApplication *app) : CounterApplicationCommand(app)
{
}

void CounterApplication::Quit::execute()
{
    app->quit();
}