// Sales Bar Chart.cpp
//

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
	const int MIN_NUMBER = 0, NUM_OF_STORES = 5, HUNDRED = 100;
	int store1, store2, store3, store4, store5, store_1_100s, store_2_100s, store_3_100s, store_4_100s, store_5_100s;

	cout << "Enter today's sales for store 1: ";
	cin >> store1;
	store_1_100s = store1 / 100;

	cout << "Enter today's sales for store 2: ";
	cin >> store2;
	store_2_100s = store2 / 100;

	cout << "Enter today's sales for store 3: ";
	cin >> store3;
	store_3_100s = store3 / 100;

	cout << "Enter today's sales for store 4: ";
	cin >> store4;
	store_4_100s = store4 / 100;

	cout << "Enter today's sales for store 5: ";
	cin >> store5;
	store_5_100s = store5 / 100;

	cout << "\nSALES BAR CHART" << endl;
	cout << "(Each * = $100)" << endl;

	cout << "Store 1: ";
	for (int i = MIN_NUMBER; i < store_1_100s; i++) {
		cout << '*';
	}
	cout << endl;

	cout << "Store 2: ";
	for (int i = MIN_NUMBER; i < store_2_100s; i++) {
		cout << '*';
	}
	cout << endl;

	cout << "Store 3: ";
	for (int i = MIN_NUMBER; i < store_3_100s; i++) {
		cout << '*';
	}
	cout << endl;

	cout << "Store 4: ";
	for (int i = MIN_NUMBER; i < store_4_100s; i++) {
		cout << '*';
	}
	cout << endl;

	cout << "Store 5: ";
	for (int i = MIN_NUMBER; i < store_5_100s; i++) {
		cout << '*';
	}
	cout << endl;
}
