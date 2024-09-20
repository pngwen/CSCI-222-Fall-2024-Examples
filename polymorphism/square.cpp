/**
 * @file square.cpp
 * @author your name (you@domain.com)
 * @brief This is the implementation of the quare class
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "square.h"

Square::Square(double l) 
{
    _l = l;
}

double Square::area() const
{
    return _l * _l;
}

double Square::perimeter() const
{
    return 4 * _l;
}


std::string Square::name() const
{
    return "Square";
}