// coinToss.cpp
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Coint Toss function
void coinToss()
{
	int randomNumber;
	randomNumber = rand() % 2;

	switch (randomNumber)
	{
	case 0:
		cout << "Heads\n";
		break;
	case 1:
		cout << "Tails\n";
		break;
	}
	
	
}

// Main code
int main()
{
	srand(time(0));
	int userNumber;
	int counter = 0;
	cout << "How many times should a coin be tossed: ";
	cin >> userNumber;
	//cout << coinTossVariable;
	while (counter < userNumber)
	{
		coinToss();

		//cout << randomNumber << endl;
		counter++;
	}
	
	cout << "Done.\n";
}