// Book Club Points.cpp
//

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int numBooks;
	//Asking user for variable
	cout << "Welcome to Serendipity Booksellers \n";
	cout << "How many books have you purchased this month? ";
	cin >> numBooks;
	//Switch for determining how many points the user gets
	switch(numBooks) {
		case 0:
			cout << "You have earned 0 points this month.\n";
			break;
		case 1:
			cout << "You have earned 5 points this month.\n";
			break;
		case 2:
			cout << "You have earned 15 points this month.\n";
			break;
		case 3:
			cout << "You have earned 30 points this month.\n";
			break;
		//Default case is used for 4 or more
		default:
			cout << "You have earned 60 points this month.\n";
			break;
	}
}

