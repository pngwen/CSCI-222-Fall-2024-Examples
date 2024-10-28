#include <iostream>
#include <iomanip>
#include <cmath>

/*
 * Backtracking 
 * 1.) Represent a candidate solution.
 * 2.) Validate candidate solutions.
 * 3.) Check to see if the problem has been solved.
 * 4.) Recursively evaluate every possible move.
 *     - if candidate is invalid, return impossible
 *     - if candidate is solved, return the candidate
 *     - Find the next unknown in the solution
 *     - For every value that can go there:
 *        solution = solve(candidate)
 *        if solution is found, stop
 *     - after the loop
 *        if(solution is found)
 *            retun the solution
 *        else
 *            return that it is impossible
 */

/**
 * @brief Compute rank (row) from q and n.
 * 
 * @param q 
 * @param n 
 * @return int 
 */
int rank(int q, int n);

/**
 * @brief Compute file (column) from q and n
 * 
 * @param q 
 * @param n 
 * @return int 
 */
int file(int q, int n);

/**
 * @brief True if the two queens are on the same diagonal
 * 
 * @param q1 
 * @param q2 
 * @param n 
 * @return true 
 * @return false 
 */
bool onDiag(int q1, int q2, int n);

/**
 * @brief Returns whether or not the queens are attacking each other
 * 
 * @param q1 
 * @param q2 
 * @param n 
 * @return true 
 * @return false 
 */
bool attacking(int q1, int q2, int n);

/**
 * @brief Return true if this is a valid candidate.
 * 
 * 
 * @param queens [0,n] if present -1 if not placed 
 * @param n 
 * @return true 
 * @return false 
 */
bool valid(int queens[], int n);

/**
 * @brief Return whether this is a complete solution or not
 * 
 * @param queens 
 * @param n 
 * @return true 
 * @return false 
 */
bool solved(int queens[], int n);

/**
 * @brief Copy the queens array. If queens is null, fill it with -1
 * 
 * @param queens 
 * @param n 
 * @return int* 
 */
int *copySolution(int *queens, int n);

/**
 * @brief Compute solution from a given position.
 * 
 * @param queens 
 * @param n 
 * @param depth - recursion dpeth counter
 * @return int* null if there is no solution, array otherwise
 */
int *solve(int *queens, int n, int depth);

/**
 * @brief Print the nqueens solution.
 * 
 * @param queens 
 * @param n 
 */
void printSolution(int *queens, int n);

int main()
{
    int n;
    int *queens, *solution;

    // get n
    std::cout << "N=";
    std::cin >> n;   

    // try to solve it
    queens = copySolution(nullptr, n);
    solution = solve(queens, n, 0);

    // display the results
    if(solution == nullptr) {
        std::cout << "Impossible" << std::endl;
    } else {
        printSolution(solution, n);
    }
    delete[] queens;
    delete[] solution;
}


// compute rank
int rank(int q, int n) 
{
    return q/n;
}

// compute file
int file(int q, int n) 
{
    return q%n;
}

// check for on the same diagonal
bool onDiag(int q1, int q2, int n)
{
    return abs(rank(q1,n)-rank(q2,n)) == abs(file(q1,n)-file(q2,n));
}

// check to see if two queens are attacking each other
bool attacking(int q1, int q2, int n) 
{
    return rank(q1,n) == rank(q2,n) or 
           file(q1,n) == file(q2,n) or
           onDiag(q1,q2,n);
}

// validate a candidate solution
bool valid(int queens[], int n)
{
    for(int i=0; i<n; i++) {
        // skip unplaced queens
        if(queens[i] == -1) continue;
        for(int j=0; j<n; j++) {
            // skip ourself and any queen that is not placed
            if(i==j or queens[j] == -1) continue;

            if(attacking(queens[i], queens[j], n)) {
                return false;
            }
        }
    }
    // no violations
    return true;
}

// determine solved status
bool solved(int queens[], int n)
{
    int count=0;

    // count the queens
    for(int i=0; i<n; i++) {
        if(queens[i] != -1) {
            count++;
        }
    }

    return n==count and valid(queens, n);
}

// copy/generate solution
int *copySolution(int *queens, int n) {
    int *ar = new int [n];

    for(int i=0; i<n; i++) {
        ar[i] = queens ? queens[i] : -1;
    }

    return ar;
}

// recursively solve
int *solve(int *queens, int n, int depth)
{
    // print the candidate
    //std::cout << std::setw(depth) << "";
    //printSolution(queens, n);

    if(not valid(queens, n)) {
        return nullptr;
    }

    if(solved(queens,n)) {
        return copySolution(queens, n);
    }

    //find the position we need to work on
    int pos;
    for(int i=0; i<n; i++) {
        if(queens[i] == -1) {
            pos = i;
            break;
        }
    }

    //copy the candidate array
    int *candidate = copySolution(queens, n);

    // search for a solution
    int *solution = nullptr;
    for(int i=0; i<n*n; i++) {
        candidate[pos] = i;
        solution = solve(candidate, n, depth+2);
        if(solution) {
            break;
        }
    }

    //clean up and return
    delete [] candidate;
    return solution;
}


// print the queens
void printSolution(int *queens, int n) 
{
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            char c = '.';
            for(int q=0; q<n; q++) {
                if(rank(queens[q],n) == i and file(queens[q],n)==j) {
                    c ='Q';
                    break;
                }
            }
            std::cout << c;
        }
        std::cout << std::endl;
    }
}