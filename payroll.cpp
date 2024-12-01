#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

// payroll structure
struct PayRoll
{
  int empNumber; // employee ID number
  string name; // the employee's name
  double payRate; // rate of pay per hour
  double hours;  // hours worked
  double grossPay; // gross pay, before taxes etc.
};

int main()
{
  PayRoll employee_1 = { 007, "James Bond", 8.25 };
  PayRoll employee_2 = { 10, "Miss Moneypenny", 20.00 };
  PayRoll employee_3 = { 101, "Trevor Swarm", 19.00 };


  /*
  // get employee number
  cout << "Please enter your ID number: ";
  cin >> employee_1.empNumber;

  // get employee name
  cout << "Enter employee's name: ";
  cin.ignore();  // skip the remaining "\n" in the buffer
  getline(cin, employee_1.name);

  // get pay rate
  cout << "What is the employee paid per hour?  ";
  cin >> employee_1.payRate;

  */
  // get hours worked by employee_1
  cout << "How many hours did the employee work?  ";
  cin >> employee_1.hours;

  // get hours worked by employee_2
  cout << "\nHow many hours did employee 2 work?  ";
  cin >> employee_2.hours;

  // calculate gross pay
  employee_1.grossPay = employee_1.hours * employee_1.payRate;
  employee_2.grossPay = employee_2.hours * employee_2.payRate;


  // display the employee's data
  //system("cls");  // clear screen
  for(int r = 0; r < 10; r++)
    {
        cout << endl;
    }

  cout << fixed << showpoint << setprecision(2);
  cout << "Here is the employee_1's pay roll data:\n";
  cout << "Name:   " << employee_1.name << endl;
  cout << "Number: " << employee_1.empNumber << "\n";
  cout << "Hours Worked:  " << employee_1.hours << endl;
  cout << "Hourly Pay Rate:  " << employee_1.payRate << endl;
  cout << "Gross Pay $" << employee_1.grossPay << endl;
  cout << endl << endl;
  cout << "Here is the employee_2's pay roll data:\n";
  cout << "Name:   " << employee_2.name << endl;
  cout << "Number: " << employee_2.empNumber << "\n";
  cout << "Hours Worked:  " << employee_2.hours << endl;
  cout << "Hourly Pay Rate:  " << employee_2.payRate << endl;
  cout << "Gross Pay $" << employee_2.grossPay << endl;

    return 0;
}
