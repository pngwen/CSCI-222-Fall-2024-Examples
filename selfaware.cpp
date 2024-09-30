/**
 * @file selfaware.cpp
 * @brief A program which prints its own source file out.
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <fstream>

using namespace std;


int main() {
    ifstream file;
    char c;

    //attempt to open the file
    file.open("selfaware.cpp");
    if(!file) {
        cerr << "Error: could not open file.";
        return -1;
    }

    //read all the characters from the file
    while(file >> noskipws >> c) {
        cout << c;
    }
    cout.flush();
}
