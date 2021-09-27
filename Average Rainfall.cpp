// Average Rainfall.cpp
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
	//Declare variables
	string month1, month2, month3;
	double inch1, inch2, inch3, average;
	//Asking user for our variables
    cout << "This program calculates the average rain fall for three months.\n";
	cout << "Enter the first month and average rainfall in inches separated by a space: ";
	cin >> month1 >> inch1;
	cout << "Enter the second month and average rainfall in inches separated by a space: ";
	cin >> month2 >> inch2;
	cout << "Enter the third month and average rainfall in inches separated by a space: ";
	cin >> month3 >> inch3;
	cout << endl;
	average = (inch1 + inch2 + inch3) / 3;
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " was " << average << " inches.\n";
	return 0;
}
