#include <iostream>
#include "classes.h"
using namespace std;

void Point::InputCoordinates() {
	cout << "Enter the coordinate X: ";
	cin >> X;
	cout << "Enter the coordinate Y: ";
	cin >> Y;
	cout << "Enter the coordinate Z: ";
	cin >> Z;
}

void Point::PrintCoordinates() {
	cout << "Point coordinates: " << X << " " << Y << " " << Z << endl;
}