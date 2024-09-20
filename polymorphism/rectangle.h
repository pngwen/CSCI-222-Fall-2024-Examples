/**
 * @file rectangle.h
 * @author Bob Lowe 
 * @brief Definition of a rectangle class
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape 
{
public:
    /**
     * Consructor for rectangle, initializes length.
     */
    Rectangle(double w, double h);

    // Virtual Overrides
    virtual double area() const override;
    virtual double perimeter() const override;
    virtual std::string name() const override;

private:
    double _w, _h;
};

#endif
