// coinToss.cpp
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Coint Toss function
void coinToss(int coinTossVariable)
{
	srand(time(0));
	int counter = 0;
	//cout << coinTossVariable;
	while (counter < coinTossVariable)
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

		//cout << randomNumber << endl;
		counter++;
	}
}

// Main code
int main()
{
	int userNumber;
	cout << "How many times should a coin be tossed: ";
	cin >> userNumber;
	coinToss(userNumber);
	cout << "Done.\n";
}