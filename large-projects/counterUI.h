/**
 * @file counterUI.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef COUNTER_UI_H
#define COUNTER_UI_H
#include <vector>
#include "counter.h"
#include "command.h"
#include "menu.h"

class CounterUI : public Command
{
public:
    CounterUI(Counter *counter);
    virtual ~CounterUI();
    virtual void execute() override;
private:
    Counter *counter;
    Menu menu;
    std::vector<Command*> commands;
    bool running;

    class CounterUICommand : public Command
    {
        public:
            CounterUICommand(CounterUI *ui);
        protected:
            CounterUI *ui;
    };

    class IncrementCounter : public CounterUICommand 
    {
        public:
            IncrementCounter(CounterUI *ui);
            virtual void execute() override;
    };

    class DecrementCounter : public CounterUICommand 
    {
        public:
            DecrementCounter(CounterUI *ui);
            virtual void execute() override;
    };

    class ResetCounter : public CounterUICommand 
    {
        public:
            ResetCounter(CounterUI *ui);
            virtual void execute() override;
    };

    class ShowCounter : public CounterUICommand 
    {
        public:
            ShowCounter(CounterUI *ui);
            virtual void execute() override;
    };

    class Quit : public CounterUICommand 
    {
        public:
            Quit(CounterUI *ui);
            virtual void execute() override;
    };
};

#endif