/**
 * @file shape.h
 * @author Bob Lowe
 * @brief Definition of a purely abstract class
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape
{
public:
    // The following are pure virtual functions
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual std::string name() const = 0;
};

#endif