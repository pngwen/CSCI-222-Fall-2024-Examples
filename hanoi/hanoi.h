/**
 * @file hanoi.h
 * @author Bob Lowe
 * @brief A class which implements the tower of Hanoi puzzle.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <vector>
#ifndef HANOI_H
#define HANOI_H

/**
 * @brief Representation, play, and printing of the puzzle.
 * 
 */
class Hanoi 
{
public:
    /**
     * @brief Construct a new Hanoi object with 3 pegs and 3 disks.
     * 
     */
    Hanoi();

    /**
     * @brief Construct a new Hanoi object with 3 pegs and given disks.
     * 
     * @param disks 
     */
    Hanoi(int disks);


    /**
     * @brief Construct a new Hanoi object
     * 
     * @param disks - Number of disks
     * @param pegs  - Number of pegs
     */
    Hanoi(int disks, int pegs);


    /**
     * @brief Attempt to move the top disk from src to dest.
     * 
     * @param src - Source peg (starting at 0)
     * @param dest  - Destination peg (starting at 0)
     * @return true If the move succeeded
     * @return false If the move failed
     */
    bool move(int src, int dest);

    /**
     * @brief Display the puzzle.
     * 
     */
    void display() const;

    /**
     * @brief Get the number of disks.
     * 
     * @return int 
     */
    int getDisks() const;

    /**
     * @brief Get the number of pegs.
     * 
     * @return int 
     */
    int getPegs() const;

    /**
     * @brief Get a const iterator to the beginning of the peg
     * 
     * @param peg 
     * @return vector<int>::const_iterator 
     */
    std::vector<int>::const_iterator begin(int peg) const;

    /**
     * @brief Get a const iterator to the end of the peg
     * 
     * @param peg 
     * @return vector<int>::const_iterator 
     */
    std::vector<int>::const_iterator end(int peg) const;

    /**
     * @brief Check the status of the puzzle
     * 
     * @return true If the puzzle is solved
     * @return false If the puzzle is not solved
     */
    bool solved() const;
private:
    int disks;
    std::vector<std::vector<int>> pegs;
};

#endif