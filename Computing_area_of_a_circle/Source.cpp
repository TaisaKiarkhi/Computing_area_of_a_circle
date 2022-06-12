#include <iostream>
#include <numbers>
#include <format>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	double radius{};

	cout << "Please, enter the radius to calculate the circle's area: ";
	cin >> radius;
	cout << endl;
	 
	double pi = numbers::pi;
	double circle_area = pi * pow(radius, 2);

	cout << format("The circle's are is {:.2f}", circle_area);
	return 0;
}