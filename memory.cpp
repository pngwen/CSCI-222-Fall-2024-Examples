/**
 * @file memory.cpp
 * @author Bob Lowe (you@domain.com)
 * @brief An exploration of pointers and memory.
 * @version 0.1
 * @date 2024-09-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int i = 42;
    double d=27;
    float f=19;
    char c='A';
    int ar[4] = {1, 2, 3, 4};
    unsigned char *start, *end;

    // Find the start and end of our variable memory
    start = (unsigned char *) &i;
    end = (unsigned char *) &i + sizeof(i);
    start = min((unsigned char*) &d, start);
    end = max((unsigned char *) &d + sizeof(d), end);
    start = min((unsigned char*) &f, start);
    end = max((unsigned char *) &ar + sizeof(ar), end);
    start = min((unsigned char*) &start, start);
    end = max((unsigned char *) &start  + sizeof(start), end);
    start = min((unsigned char*) &end, start);
    end = max((unsigned char *) &end+ sizeof(end), end);

    // print out memory information
    cout << "&i=" << &i << " sizeof(i)=" << sizeof(i) << endl
         << "&d=" << &d << " sizeof(d)=" << sizeof(d) << endl
         << "&f=" << &f << " sizeof(f)=" << sizeof(f) << endl
         << "&c=" << (void*) &c << " sizeof(c)=" << sizeof(c) << endl
         << "&ar=" << &ar << " sizeof(ar)=" << sizeof(ar) << endl
         << "&start=" << &start << " sizeof(start)=" << sizeof(start) << endl
         << "&end=" << &end << " sizeof(end)=" << sizeof(end) << endl;
    cout << "Variable space bytes: " << end-start + 1 << endl;

    // print out the bytes in memory
    cout << hex;
    cout << "Address\tData" << endl;
    for(unsigned char *ptr = start; ptr != end; ptr++) {
        cout << (void*) ptr << "\t0x" << setfill('0') << setw(2) << (int) *ptr << endl;
    }

    // play with pointer addition
    int *ptr;
    ptr = &i;
    cout << "ptr=" << ptr << " ptr+2=" << ptr+2 << endl;

    // let's crash the program!
    ptr = 0;
    *ptr = 1;
}