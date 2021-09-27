// Miles per Gallon.cpp
//

#include <iostream>
using namespace std;

int main()
{
	//Declaring variables
	double tank;
	double miles;
	double mpg;

	//User input
    cout << "Enter the number of gallons: ";
	cin >> tank;
	cout << "Enter the number of miles driven: ";
	cin >> miles;
	//Calculating mpg
	mpg = miles / tank;
	cout << "This car gets " << mpg << " miles per gallon.\n";
	return 0;
}


