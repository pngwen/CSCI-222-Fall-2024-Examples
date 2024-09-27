#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/**
 * @brief Roll n d sided dice
 * 
 * @param n The number of dice
 * @param d The number of sides
 * @return int* 
 */
int* droll(int n, int d);

void printArray(int ar[], int n);

int main() 
{
    srand(time(0));

    int *roll = droll(3, 6);
    printArray(roll, 3);
    cout << endl;
}


int* droll(int n, int d)
{
    // dynamically allocate the new array
    int *result = new int [n];

    // roll the dice
    for(int i=0; i<n; i++) {
        result[i] = rand() % d + 1;
    }

    return result;
}


void printArray(int ar[], int n) 
{
    cout << "{";
    for(int i=0; i<n; i++) {
        cout << ar[i];
        if(i<n-1) {
            cout << ", ";
        }
    }
    cout << "}";
}