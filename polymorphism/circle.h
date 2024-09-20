/**
 * @file circle.h
 * @author Bob Lowe 
 * @brief Definition of a square class
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape 
{
public:
    /**
     * Consructor for square, initializes length.
     */
    Circle(double r);

    // Virtual Overrides
    virtual double area() const override;
    virtual double perimeter() const override;
    virtual std::string name() const override;

private:
    double _r;
};

#endif
