/**
 * @file circle.cpp
 * @author your name (you@domain.com)
 * @brief Implementation of the circle class.
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "circle.h"
#include <cmath>

Circle::Circle(double r) 
{
    _r = r;
}

double Circle::area() const
{
    return _r * _r * M_PI;
}

double Circle::perimeter() const 
{
    return 2 * M_PI * _r;
}

std::string Circle::name() const 
{
    return "Circle";
}