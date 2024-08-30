#include <iostream>
#include <cmath>

///////////////////////////////
// Function Prototypes
///////////////////////////////
int getNumber(int min, int max);
void getData(double data[], int n);
double computeAverage(double data[], int n);
double computeStdDev(double average, double data[], int n);

int main() 
{
  double average;
  double s;
  double data[100];
  int n;

  // get the data
  n = getNumber(1, 100);
  getData(data, n);

  // compute the statistics
  average = computeAverage(data, n);
  s = computeStdDev(average, data, n);

  // Display the results
  std::cout << "Average: " << average << std::endl;
  std::cout << "Std Dev: " << s << std::endl;
}

// Returns an integer in the range [min, max]
int getNumber(int min, int max)
{
  int n;
  bool invalid;

  do {
    std::cout << "Enter a number between " << min 
              << " and " << max << ": ";
    std::cin >> n;
    invalid = n < min or n > max;
    if( invalid) {
      std::cerr << "Invalid entry. Please try again." << std::endl;
    }
  } while(invalid);

  return n;
}

// Populate data with n numbers.
void getData(double data[], int n) {
  // get the numbers
  std::cout << "Enter " << n << " numbers." << std::endl;
  for (int i = 0; i < n; i++) {
    std::cin >> data[i];
  }
}

// Compute the average of the array of n numbers.
double computeAverage(double data[], int n) {
  double total = 0;

  for (int i = 0; i < n; i++) {
    total += data[i];
  }

  return total/n;
}


// Compute the standard deviation of the numbers
double computeStdDev(double average, double data[], int n){
  double total = 0;

  for(int i=0; i<n; i++) {
    total += pow(data[i]-average, 2);
  }

  return sqrt(total/n);
}
