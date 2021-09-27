// Software Sales.cpp
//

#include <iostream>
using namespace std;

int main()
{
	//Declaring variables that we will need
	double base_cost = 99;
	double final_cost;
	double discount_percent = 1;
	int quantity = 0;

	//Asking user for information
	cout << "Enter the number of units you are purchasing:  ";
	cin >> quantity;

	//Confirming quantity is greater than 0
	while (quantity < 1) {
		
		cout << "The total units sold must be greater than 0!\n";
		cout << "Enter the number of units you are purchasing:  ";
		cin >> quantity;
	}

	//Determening our discount percent
	if (quantity <= 9) {
		discount_percent = 1;
	}
	else if (quantity <= 19 & quantity >= 10) {
		discount_percent = .80;
	}
	else if (quantity <= 49 & quantity >= 20) {
		discount_percent = .70;
	}
	else if (quantity <= 99 & quantity >= 50) {
		discount_percent = .60;
	}
	else {
		discount_percent = .50;
	}

	//Math
	final_cost = base_cost * quantity * discount_percent;

	//Displaying final cost to the terminal
	cout << "The total cost for " << quantity << " units is $" << final_cost;
	cout << endl;
}
