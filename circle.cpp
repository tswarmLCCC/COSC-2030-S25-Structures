#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// const float for PI
const float PI = 3.14159;

// Structure declaration
struct Circle {
  double radius;   // the radius of the circle
  double diameter; // diameter of the circle
  double area;     // area of the circle
};

int main() {
  Circle c; // create a structure variable

  // get diameter from user
  cout << "What is the diameter of the circle?  ";
  cin >> c.diameter;

  // calculate the radius
  c.radius = c.diameter / 2;

  // calculate area
  c.area = PI * pow(c.radius, 2.0);

  // display new data
  cout << fixed << showpoint << setprecision(2);
  cout << "The radius and area of the circle are:\n";
  cout << "Radius: " << c.radius << endl;
  cout << "Area:   " << c.area << endl;

  // pause at end of program
  cin.ignore();
  cin.get();
}