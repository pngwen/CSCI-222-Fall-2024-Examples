#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct TocEntry {
    string name;
    int page;

    TocEntry(const string &name, int page) {
        this->name = name;
        this->page = page;
    }
};

int main() {
    TocEntry toc [] = {
        TocEntry{"Chapter 1 - Introduction to Programming", 1},
        TocEntry{"Chapter 2 - Happy Memories of Coding", 35},
        TocEntry{"Chatper 3 - Traumatic Realities of Programming", 75},
        TocEntry{"Chapter 4 - Surrender to the Silicon", 110}
    };

    // set up the peristent padding value
    cout << setfill('.');

    // print out the header
    cout << endl << "Table of Contents" << endl;
    for(TocEntry *entry = toc; entry < toc + sizeof(toc)/sizeof(TocEntry); entry++) {
        cout << left  << setw(70) << entry->name 
             << right <<  setw(3) << entry->page 
             << endl;
    }
    cout << endl;
}