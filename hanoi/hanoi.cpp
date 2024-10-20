/**
 * @file hanoi.cpp
 * @author Bob Lowe
 * @brief Implementation of the Hanoi puzzle.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2024
 */
#include <iostream>
#include <iomanip>
#include "hanoi.h"

using namespace std;

// Constructors (mostly just delegates)
Hanoi::Hanoi() : Hanoi(3) {}
Hanoi::Hanoi(int disks) : Hanoi(disks, 3) {}
Hanoi::Hanoi(int disks, int pegs) 
{
    this->disks = disks;

    // create the pegs
    for(int i=0; i<pegs; i++) {
        this->pegs.push_back(vector<int>());
    }

    // create the disks
    for(int i=disks; i>0; i--) {
        this->pegs[0].push_back(i);
    }
}


// attempt a move, returning success
bool Hanoi::move(int src, int dest) 
{
    // make sure the src and dest are within range
    if(src < 0 or dest < 0 or src >= pegs.size() or dest >= pegs.size()) {
        return false;
    }

    // make sure there is something to move
    if(pegs[src].size()==0) {
        return false;
    }

    // make sure the move is legal
    if(pegs[dest].size()!=0 and pegs[src].back() > pegs[dest].back()) {
        return false;
    }

    // perform the move
    pegs[dest].push_back(pegs[src].back());
    pegs[src].pop_back();

    return true;
}


// print out the pegs
/*
        size-offset
3: [2]  0    3 1  -2
2: [1]  1    2 2  0
1: [0]  2    1 3  2
  #
 ###
#####
*/
void Hanoi::display() const
{
    int width = disks*2-1;
    int padding;

    for(int offset=disks; offset > 0; offset--) {
        for(int j=0;j<pegs.size(); j++) {
            int index = offset-1;

            if(pegs[j].size() > index) {
                int diskSize = pegs[j][index]*2-1;
                padding = (width-diskSize)/2;
                cout << setw(padding) << "" 
                     << setfill('=') << setw(diskSize) << "" 
                     << setfill(' ') << setw(padding) << "";
            } else {
                padding = width/2;
                cout << setw(padding+1) << "|" 
                     << setw(padding) << "";

            }
            cout << ' ';
        }
        cout << endl;
    }
    padding = width/2;
    for(int i=0; i<pegs.size(); i++) {
        cout << setw(padding+1) << i+1 
             << setw(padding) << "" 
             << ' ';
    }
    cout << endl;
}


// get the number of disks
int Hanoi::getDisks() const
{
    return disks;
}

// get the number of pegs
int Hanoi::getPegs() const
{
    return pegs.size();
}

// get an iterator to the beginning of the peg
vector<int>::const_iterator Hanoi::begin(int peg) const
{
    return pegs[peg].begin();
}

// get an iterator to the end of the peg
vector<int>::const_iterator Hanoi::end(int peg) const
{
    return pegs[peg].end();
}

// return the sovled status
bool Hanoi::solved() const
{
    return disks == pegs.back().size();
}