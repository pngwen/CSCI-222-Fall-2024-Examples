#include <iostream>
#include <vector>

using namespace std;

template<typename T> void printVector(const vector<T> &v);

int main()
{
    // A vector is template for a dynamically growing array
    vector<int> v;  // A vector of integers
    int n;

    cout << "size: " << v.size() << "capacity: " << v.capacity() << endl;

    // build a list of numbers
    cout << "Enter a list of numbers, enter a non-number to stop." << endl;
    while(cin >> n) {
        v.push_back(n);
        cout << "size: " << v.size() << "capacity: " << v.capacity() << endl;
    }

    // print the vector
    printVector(v);
}


template<typename T> void printVector(const vector<T> &v)
{
    cout << "{";
    for(auto itr = v.begin(); itr != v.end(); itr++) {
        if(itr != v.begin()) {
            cout << ", ";
        }
        cout << *itr;
    }
    cout << "}"<<endl;
}