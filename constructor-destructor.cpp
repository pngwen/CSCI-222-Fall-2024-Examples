// File: constructor-destructor.cpp
// Purpose: A demonstration of constructors and destructors
#include <iostream>

using namespace std;

class Demo {
public:
    // constructors
    Demo(); 
    Demo(int x);

    // destructor
    ~Demo();
private:
};

class Demo2 {
public:
    Demo2(int x);
private:
};


int main() {
    Demo d;
    Demo dnew{42};  // < -- new way of doing constructors with arguments
    Demo dold(-42); // < -- old way of doing constructions with arguments
    // Demo2 d2;  this is illegal because the only Demo2 constructor requires and argument
    Demo2 d2{10};

    cout << "I'm doing some stuff." << endl;
}


// Demo's implementation
Demo::Demo() 
{
    cout << "Demo is being constructed." << endl;
}

Demo::Demo(int x) 
{
    cout << "Demo is being constructed and you gave me x=" << x << endl;
}


Demo::~Demo() 
{
    cout << "AHHHHHHH" << endl; 
}

Demo2::Demo2(int x) {
    cout << "Demo2 is being constructed and you gave me x=" << x << endl;
}