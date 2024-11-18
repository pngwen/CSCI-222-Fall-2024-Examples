/**
 * @file counterTest.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "counter.h"

int main()
{
    Counter c1;
    Counter c2{"Counter 2"};
    Counter c3{"Counter 3", 2};
    Counter c4{"Counter 4", 2, 10};

    std::cout << "Counter 1: " << c1.getLabel() << " " << c1.getCount() << std::endl;
    std::cout << "Counter 2: " << c2.getLabel() << " " << c2.getCount() << std::endl;
    std::cout << "Counter 3: " << c3.getLabel() << " " << c3.getCount() << std::endl;
    std::cout << "Counter 4: " << c4.getLabel() << " " << c4.getCount() << std::endl;

    c1.inc();
    c2.inc();
    c3.inc();
    c4.inc();

    std::cout << "Counter 1: " << c1.getLabel() << " " << c1.getCount() << std::endl;
    std::cout << "Counter 2: " << c2.getLabel() << " " << c2.getCount() << std::endl;
    std::cout << "Counter 3: " << c3.getLabel() << " " << c3.getCount() << std::endl;
    std::cout << "Counter 4: " << c4.getLabel() << " " << c4.getCount() << std::endl;

    c1.dec();
    c2.dec();
    c3.dec();
    c4.dec();

    std::cout << "Counter 1: " << c1.getLabel() << " " << c1.getCount() << std::endl;
    std::cout << "Counter 2: " << c2.getLabel() << " " << c2.getCount() << std::endl;
    std::cout << "Counter 3: " << c3.getLabel() << " " << c3.getCount() << std::endl;
    std::cout << "Counter 4: " << c4.getLabel() << " " << c4.getCount() << std::endl;

    c1.reset();
    c2.reset();
    c3.reset();
    c4.reset();

    std::cout << "Counter 1: " << c1.getLabel() << " " << c1.getCount() << std::endl;
    std::cout << "Counter 2: " << c2.getLabel() << " " << c2.getCount() << std::endl;
    std::cout << "Counter 3: " << c3.getLabel() << " " << c3.getCount() << std::endl;
    std::cout << "Counter 4: " << c4.getLabel() << " " << c4.getCount() << std::endl;

    return 0;
}