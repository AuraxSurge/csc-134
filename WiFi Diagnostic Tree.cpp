// WiFi Diagnostic Tree.cpp
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Declare variables needed
	string user_input1, user_input2, user_input3, user_input4;
	string answer = "no";

	//Start asking user questions
    cout << "This program is meant to help troubleshoot a bad Wi-Fi connection.\n";
	//First branch
	cout << "Reboot the computer and try to connect.\n";
	cout << "Did that fix the problem? ";
	cin >> user_input1;
	//Second branch
	if (user_input1 == answer) {
		cout << "Reboot the router and try to connect.\n";
		cout << "Did that fix the problem? ";
		cin >> user_input2;
		//Third branch
		if (user_input2 == answer) {
			cout << "Make sure the cables between the router and the modem are pluggen in firmly.\n";
			cout << "Did that fix the problem? ";
			cin >> user_input3;
			//Fourth branch
			if (user_input3 == answer) {
				cout << "Move the router to a new location.\n";
				cout << "Did that fix the problem? ";
				cin >> user_input4;
				//Fifth branch
				if (user_input4 == answer) {
					cout << "Get a new router.";
				}
				else {

				}
			}
			else {

			}
		}
		else {

		}
	}
	else {

	}
}