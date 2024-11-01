#include <iostream>

using namespace std;

// prototype
template<typename T> T myAbs(T x);


int main()
{
    int n;
    double d;

    // explicit template call
    cout << "Enter an integer: ";
    cin >> n;
    cout << myAbs<int>(n) << endl;;

    // implicit (deduced) template call
    cout << "Enter a real number: ";
    cin >> d;
    cout << myAbs(d) << endl;
}


template<typename T> T myAbs(T x)
{
    if(x < 0) {
        return x*-1;
    }

    return x;
}
