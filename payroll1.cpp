#include <iomanip>
#include <iostream>
using namespace std;

struct PayInfo {
  int hours;
  double payRate;
};

int main() {
  const int NUM_WORKERS = 3;
  PayInfo workers[NUM_WORKERS];
  int index;

  cout << "Enter the hours worked by " << NUM_WORKERS
       << " employees and their hourly rates.\n";

  for (index = 0; index < NUM_WORKERS; index++) {
    // get the hours worked
    cout << "Hours worked by employee #  " << (index + 1);
    cin >> workers[index].hours;

    // get hourly rate
    cout << "Hourly Pay Rate for employee #  " << (index + 1);
    cin >> workers[index].payRate;
    cout << endl;
  }

  // display information
  cout << "Here is the gross pay for each employee\n";
  cout << fixed << showpoint << setprecision(2);

  for (index = 0; index < NUM_WORKERS; index++) {
    double gross;
    gross = workers[index].hours * workers[index].payRate;
    cout << "Employee #" << (index + 1);
    cout << ": $" << gross << endl;
  }

  cin.ignore();
  cin.get();
}