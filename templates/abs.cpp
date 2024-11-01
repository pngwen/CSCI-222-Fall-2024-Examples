#include <iostream>

using namespace std;

// prototype
int myAbs(int x);
double myAbs(double x);


int main()
{
    int n;
    double d;

    cout << "Enter an integer: ";
    cin >> n;
    cout << myAbs(n) << endl;;

    cout << "Enter a real number: ";
    cin >> d;
    cout << myAbs(d) << endl;
}


int myAbs(int x) 
{
    if(x < 0) {
        return x*-1;
    }

    return x;
}

double myAbs(double x) 
{
    if(x < 0) {
        return x*-1;
    }

    return x;
}