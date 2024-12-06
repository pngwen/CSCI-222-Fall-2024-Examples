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
#include "counter.h"

class CounterApplication : public Command
{
public:
    /**
     * @brief Construct a new Counter Application object
     * 
     */
    CounterApplication();

    /**
     * @brief Destroy the Counter Application object
     * 
     */
    virtual ~CounterApplication();

    /**
     * @brief Execute the counter application
     * 
     */
    virtual void execute() override;

    /**
     * @brief quit the application
     * 
     */
    virtual void quit();

private:
    std::vector<Counter> counters;
    bool running;

    class CounterApplicationCommand : public Command
    {
    public:
        CounterApplicationCommand(CounterApplication *app);
    protected:
        CounterApplication *app;
    };

    class AddCounter : public CounterApplicationCommand
    {
    public:
        AddCounter(CounterApplication *app);
        virtual void execute() override;
    };

    class Quit : public CounterApplicationCommand
    {
    public:
        Quit(CounterApplication *app);
        virtual void execute() override;
    };
};
#endif