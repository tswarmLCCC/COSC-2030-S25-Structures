/*
This program defines a structure Student with three data members: roll, age, and
marks. It also defines a member function printDetails() that prints the details
of a student.

In the main() function, we create a Student object s and assign values to its
data members. We then call the printDetails() function to print the details of
the student.

You can modify this program to store and print the details of multiple students
by using an array of structures or linked lists.
*/

#include <iostream>
using namespace std;

struct Student {
  int roll;
  int age;
  int marks;
  void printDetails() {
    cout << "Roll = " << roll << "\n";
    cout << "Age = " << age << "\n";
    cout << "Marks = " << marks;
  }
};

int main() {
  Student s;
  s.roll = 1;
  s.age = 20;
  s.marks = 85;
  s.printDetails();
  return 0;
}
