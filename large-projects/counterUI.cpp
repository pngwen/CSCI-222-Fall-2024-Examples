/**
 * @file counterUI.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "counterUI.h"
#include <iostream>

CounterUI::CounterUI(Counter *counter) : counter(counter), menu("Counter Menu")
{

    Command *command;

    // Add the increment command
    command = new IncrementCounter(this);
    menu.addItem("Increment", *command);
    commands.push_back(command);

    // Add the decrement command
    command = new DecrementCounter(this);
    menu.addItem("Decrement", *command);
    commands.push_back(command);

    // Add the reset command
    command = new ResetCounter(this);
    menu.addItem("Reset", *command);
    commands.push_back(command);

    // Add the show command
    command = new ShowCounter(this);
    menu.addItem("Show", *command);
    commands.push_back(command);

    // Add the quit command
    command = new Quit(this);
    menu.addItem("Quit", *command);
    commands.push_back(command);
}

CounterUI::~CounterUI()
{
    for (Command *command : commands)
    {
        delete command;
    }
}

void CounterUI::execute()
{
    running = true;
    while (running)
    {
        menu.execute();
    }
}

CounterUI::CounterUICommand::CounterUICommand(CounterUI *ui) : ui(ui)
{
}

CounterUI::IncrementCounter::IncrementCounter(CounterUI *ui) : CounterUICommand(ui)
{
}

void CounterUI::IncrementCounter::execute()
{
    ui->counter->inc();
}

CounterUI::DecrementCounter::DecrementCounter(CounterUI *ui) : CounterUICommand(ui)
{
}

void CounterUI::DecrementCounter::execute()
{
    ui->counter->dec();
}

CounterUI::ResetCounter::ResetCounter(CounterUI *ui) : CounterUICommand(ui)
{
}

void CounterUI::ResetCounter::execute()
{
    ui->counter->reset();
}

CounterUI::ShowCounter::ShowCounter(CounterUI *ui) : CounterUICommand(ui)
{
}

void CounterUI::ShowCounter::execute()
{
    std::cout << ui->counter->getLabel() << ": " << ui->counter->getCount() << std::endl;
}   

CounterUI::Quit::Quit(CounterUI *ui) : CounterUICommand(ui)
{
}

void CounterUI::Quit::execute()
{
    ui->running = false;
}