#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    
  string shape;
  cout << "Enter the shape of the object (sphere, cube, cylinder, cone): ";
  cin >> shape;
  cout << "\nSphere shape just use first dimension as radius for operating";
  cout << "\nCylinder and cone use first dimension as radius and second dimension as height for operating";
  vector<double> dimensions;
  cout << "\n \nEnter the dimensions of the object (separated by spaces): ";
  for (int i = 0; i < 3; i++) {
    double dimension;
    cin >> dimension;
    dimensions.push_back(dimension);
  }
 
  double volume, surface_area;
  if (shape == "sphere") {
    double radius = dimensions[0];
    volume = M_PI * pow(radius, 3) * 4/3;
    surface_area = 4 * M_PI * pow(radius, 2);
  } else if (shape == "cube") {
    double length = dimensions[0];
    double width = dimensions[1];
    double height = dimensions[2];
    volume = length * width * height;
    surface_area = 2 * (length * width + length * height + width * height);
  } else if (shape == "cylinder") {
    double radius = dimensions[0];
    double height = dimensions[1];
    volume = M_PI * pow(radius, 2) * height;
    surface_area = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;
  } else if (shape == "cone") {
    double radius = dimensions[0];
    double height = dimensions[1];
    volume = M_PI * pow(radius, 2) * height * 1/3;
    surface_area = M_PI * pow(radius, 2) + M_PI * radius * sqrt(pow(radius, 2) + pow(height, 2));
  } else {
    cout << "Invalid shape." << endl;
    return 1;
  }

  cout << "\nThe volume of the " << shape << " is " << volume << endl;
  cout << "\nThe surface area of the " << shape << " is " << surface_area << endl;

return 0;  
}