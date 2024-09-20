/**
 * @file rectangle.cpp
 * @author your name (you@domain.com)
 * @brief Implementation of the rectangle
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "rectangle.h"

Rectangle::Rectangle(double w, double h)
{
    _w = w;
    _h = h;
}


double Rectangle::area() const
{
    return _w * _h;
}


double Rectangle::perimeter() const
{
    return 2 * _h + 2 * _w;
}


std::string Rectangle::name() const
{
    return "Rectangle";
}