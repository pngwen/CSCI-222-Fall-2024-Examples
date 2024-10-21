#include <iostream>
#include "hanoi.h"

using namespace std;

// Function prototypes
void play(Hanoi &puzzle);
void solve(Hanoi &puzzle);
void move(Hanoi &puzzle, int &count, int n, int src, int dest, int spare);

int main()
{
    // move and disk variables
    int choice;
    int disks;

    // get the disks
    cout << "How many disks? ";
    cin >> disks;

    // create the puzzle
    Hanoi puzzle{disks};

    // get the choice
    do {
        cout << "1. Play" << endl;
        cout << "2. Solve" << endl;
        cout << "Choice: ";
        cin >> choice;
    } while(choice < 1 or choice > 2);

    // play or solve
    if(choice == 1) {
        play(puzzle);
    } else {
        solve(puzzle);
    }
}


/**
 * @brief Have a human player solve the puzzle
 * 
 * @param puzzle 
 */
void play(Hanoi &puzzle)
{
    // move and disk variables
    int src, dest;
    int count = 0;

    while(not puzzle.solved()) {
        puzzle.display();
        cout << "Src=";
        cin >> src;
        cout << "Dest=";
        cin >> dest;

        if(puzzle.move(src-1, dest-1)) {
            count++;
        } else {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    // display the result
    puzzle.display();
    cout << "You solved the puzzle in " << count << " moves." << endl;
}

/**
 * @brief Have the computer solve the puzzle.
 * 
 * @param puzzle 
 */
void solve(Hanoi &puzzle)
{
    int count=0;
    puzzle.display();

    move(puzzle, count, puzzle.getDisks(), 0, 2, 1);
    cout << "You solved the puzzle in " << count << " moves." << endl;
}

/**
 * @brief Recursively solve the puzzle
 * 
 * @param puzzle 
 * @param n 
 * @param src 
 * @param dest 
 * @param spare
 */
void move(Hanoi &puzzle, int &count, int n, int src, int dest, int spare)
{
    // base condition
    if(n == 1) {
        cout << "Src=" << src+1 << endl
             << "Dest=" << dest+1 << endl;
        puzzle.move(src, dest);
        puzzle.display();
        count++;
        return;
    }

    // recursive cases
    move(puzzle, count, n-1, src, spare, dest);
    move(puzzle, count, 1, src, dest, spare);
    move(puzzle, count, n-1, spare, dest, src);
}
