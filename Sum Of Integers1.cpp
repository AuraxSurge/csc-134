// Sum of Numbers1.cpp
//

#include <iostream>
using namespace std;

int main()
{
	//Decalare variables
	int user_loop_value, user_input = 0, total_sum = 0, counter = 0, accumulative = 1;

	//Asking user for how many times we will loop for
	cout << "Enter a positive integer: ";
	cin >> user_loop_value;

	//Checking if user_loop_variable is a positive integer
	while (user_loop_value < 1) {
		cout << "That is not a valid number.\n";
		cout << "Enter a positive integer: ";
		cin >> user_loop_value;
	}

	//Adding all of the numbers
	while (counter != user_loop_value) {
		total_sum = total_sum + accumulative;
		counter++;
		accumulative++;
	}

	//Printing final result
	cout << "The total sum is: " << total_sum << endl;
}

