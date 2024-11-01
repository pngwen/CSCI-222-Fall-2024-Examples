#include<iostream>
#include<vector>
#include <string>
#include "labeled.h"

using namespace std; 

int main()
{
    vector<Labeled<int>> v;
    string label;
    int i;

    while(cin>> label >> i) {
        v.push_back(Labeled<int>{label, i});
    }

    for(auto itr = v.begin(); itr != v.end(); itr++) {
        cout << itr->label() << ": " << itr->value() << endl;
    }
}