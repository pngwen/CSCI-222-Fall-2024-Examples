// File: struct.cpp
// Purpose: Demonstrate structs using 2 dimensional points
#include <iostream>
#include <cmath>

using namespace std;

struct point {
    double x;
    double y;
};

struct line {
    double m;
    double b;
};

line computeLine(point p1, point p2);
point midpoint(point p1, point p2);
double distance(point p1, point p2);
void printPoint(point p);

int main()
{
    point p1, p2;

    // get two points
    cout << "x1: ";
    cin >> p1.x;
    cout << "y1: ";
    cin >> p1.y;
    cout << "x2: ";
    cin >> p2.x;
    cout << "y2: ";
    cin >> p2.y;

    line l = computeLine(p1, p2);
    point mid = midpoint(p1, p2);
    double dist = distance(p1, p2);

    cout << "Line: Y=" << l.m << "x+" << l.b << endl;
    cout << "Midpoint: ";
    printPoint(mid);
    cout << endl;
    cout << "Distance: " << dist << endl;

}

line computeLine(point p1, point p2)
{
    line l;

    l.m = (p2.y - p1.y) / (p2.x - p1.x);
    l.b = p1.y - l.m * p1.x;

    return l;
}


point midpoint(point p1, point p2) 
{
    point mid;

    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;

    return mid;
}

double distance(point p1, point p2)
{
    double dx;
    double dy;

    dx = p1.x - p2.x;
    dy = p1.y - p2.y;

    return sqrt(dx*dx + dy*dy);    
}

void printPoint(point p)
{
    cout << "(" << p.x << ", " << p.y << ")";
}