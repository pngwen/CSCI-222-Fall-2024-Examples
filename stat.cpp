#include <iostream>

int main() {
  double average;
  double num;
  double total = 0;
  int n;

  // get the number of numbers
  std::cout << "How many numbers? ";
  std::cin >> n;

  // get the numbers
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    total += num;
  }

  // compute the average
  average = total / n;

  std::cout << "Average: " << average << std::endl;
}