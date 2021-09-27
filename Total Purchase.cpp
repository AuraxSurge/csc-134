// Total Purchase.cpp
//

#include <iostream>
using namespace std;

int main()
{
    // Declaring our vaiables
	const double taxRate = 0.07;
	double itemCost1 = 15.95, itemCost2 = 24.95, itemCost3 = 6.95, itemCost4 = 12.95, itemCost5 = 3.95, itemCost, totalCost, taxAmount;

	// Calculate
	itemCost = itemCost1 + itemCost2 + itemCost3 + itemCost4 + itemCost5;
	taxAmount = itemCost * taxRate;
	totalCost = itemCost + taxAmount;

	// Print to console
	cout << "Item 1: $" << itemCost1 << endl;
	cout << "Item 2: $" << itemCost2 << endl;
	cout << "Item 3: $" << itemCost3 << endl;
	cout << "Item 4: $" << itemCost4 << endl;
	cout << "Item 5: $" << itemCost5 << endl << endl;

	cout << "Item Cost: $" << itemCost << endl;
	cout << "Tax: $" << taxAmount << endl;
	cout << "Total Cost: $" << totalCost << endl;

}

