#include <iostream>
#include <iomanip>

using namespace std;

// overloaded functions for f.
// - Same Name
// - Differ in number and/or type of argument
void f();
void f(int x);

/*
 * Overloading Notes
 * - Express programmer intent.
 * - Be careful that overloaded functions have a logicaly common behavior.
 */

/*
 * A point with overloaded oeprators.
 */
struct Point {
    // overloaded constructors
    Point() { }  // no argument constructor
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double x;
    double y;
};


// lhs * rhs - operator overload
Point operator*(const Point &lhs, double rhs);
Point operator*(double lhs, const Point &rhs);

// insertion operator overload
ostream& operator<<(ostream &lhs, const Point &rhs);

int main() 
{
    f();
    f(2);
    f('c');

    Point p{2,3};
    Point p2;

    p2 = p * 2.0;
    p2 = 2.0 * p;
    cout << "2.0 * " << setw(20) << p << "= " << p2 << endl;
}

void f() {
    cout << "I am the first F." << endl;
}


void f(int x) {
    cout << "I am the second F." << endl;
}


Point operator*(const Point &lhs, double rhs) 
{
    Point result;
    result.x = lhs.x * rhs;
    result.y = lhs.y * rhs;

    return result;
}


Point operator*(double lhs, const Point &rhs) 
{
    return rhs * lhs;
}


ostream& operator<<(ostream &lhs, const Point &rhs) 
{
    return lhs << "(" << rhs.x << ", " << rhs.y << ")"; 
}