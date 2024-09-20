/**
 * @file square.h
 * @author Bob Lowe 
 * @brief Definition of a square class
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : public Shape 
{
public:
    /**
     * Consructor for square, initializes length.
     */
    Square(double l);

    // Virtual Overrides
    virtual double area() const override;
    virtual double perimeter() const override;
    virtual std::string name() const override;

private:
    double _l;
};

#endif
