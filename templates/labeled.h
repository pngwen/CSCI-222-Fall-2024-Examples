#include <iostream>
#include <string>

#ifndef LABELED_H
#define LABELED_H

template <typename T> class Labeled {
public:
    // constructor
    Labeled(const std::string &l, const T& v) 
    {
        _label = l;
        item = v;
    }

    // grab the item by reference
    T& value() 
    {
        return item;
    }

    // get the label
    std::string label() 
    {
        return _label;
    }
private:
    std::string _label;
    T item;
};
#endif