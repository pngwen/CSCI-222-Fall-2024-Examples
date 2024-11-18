/**
 * @file counter.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <string>
#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
public:
    /**
     * @brief Construct a new Counter object
     * 
     */
    Counter();
    Counter(const std::string& label);
    Counter(const std::string& label, int increment);
    Counter(const std::string& label, int increment, int start);

    /**
     * @brief Increment the counter.
     * 
     */
    void inc();

    /**
     * @brief Decrement the counter
     * 
     */
    void dec();

    /**
     * @brief Reset the counter
     * 
     */
    void reset();


    /**
     * @brief Get the Label object
     * 
     * @return std::string 
     */
    std::string getLabel() const;

    /**
     * @brief Get the Count object
     * 
     * @return int 
     */
    int getCount() const;

    /**
     * @brief Get the Increment object
     * 
     * @return int 
     */
    int getIncrement() const;

private:
    int count;
    std::string label;
    int increment;
    int start;
};

#endif