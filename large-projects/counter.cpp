/**
 * @file counter.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "counter.h"

Counter::Counter()
{
    label = "Counter";
    increment = 1;
    start = 0;
    count = start;
}

Counter::Counter(const std::string& label)
{
    this->label = label;
    increment = 1;
    start = 0;
    count = start;
}

Counter::Counter(const std::string& label, int increment)
{
    this->label = label;
    this->increment = increment;
    start = 0;
    count = start;
}

Counter::Counter(const std::string& label, int increment, int start)
{
    this->label = label;
    this->increment = increment;
    this->start = start;
    count = start;
}

void Counter::inc()
{
    count += increment;
}

void Counter::dec()
{
    count -= increment;
}

void Counter::reset()
{
    count = start;
}


int Counter::getCount() const
{
    return count;
}

int Counter::getIncrement() const
{
    return increment;
}

std::string Counter::getLabel() const
{
    return label;
}