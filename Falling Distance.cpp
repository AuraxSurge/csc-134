// Falling Distance.cpp
//

#include <iostream>
#include <cmath>
using namespace std;

const double g = 9.8;

double fallingDistance(double);

int main()
{
	int counter;
	double d,t;

	cout << "How long did the object fall in seconds: ";
	cin >> counter;

	for (int i = 0; i < counter; i++)
	{
		t = i + 1;
		d = fallingDistance(t);

		cout << t << " seconds =  " << d << " meters" << endl;
	}

	return 0;
}

double fallingDistance(double fallingTime)
{
	return (0.5) * g * pow(fallingTime, 2);
}
