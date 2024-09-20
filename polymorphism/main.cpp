#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"

using namespace std;

void printShape(Shape *s);

int main()
{
    Shape* list[5];

    list[0] = new Circle{2};
    list[1] = new Circle{3};
    list[2] = new Square{4};
    list[3] = new Square{5};
    list[4] = new Rectangle{6,7};

    for(int i=0; i<5; i++) {
        printShape(list[i]);
    }
}

void printShape(Shape *s)
{
    cout << s->name() << " perimeter: " << s->perimeter() << " area: " << s->area() << endl;    
}