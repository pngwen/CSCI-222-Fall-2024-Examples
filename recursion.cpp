#include <iostream>

using namespace std;

int f(int x) 
{
    cout << x << " " << &x << endl;
    if(x==0) {
        return 0;
    }

    return x + f(x-1);
}

int main() 
{
    cout << f(10) << endl;
}