// Overloaded Hospital.cpp
//

#include <iostream>
using namespace std;

void calculateTotal(int days, double rate, double mCharges, double hCharges)
{
	double total;
	total = (days * rate) + mCharges + hCharges;
	cout << "\nThe total amount is $" << total;
}

void calculateTotal(double mCharges, double hCharges)
{
	double total;
	total = mCharges + hCharges;
	cout << "\nThe total amount is $" << total;
}

int main()
{
	//Declaring variables needed for our project
	char patientType = 'N';

	//Starting our program
    cout << "Was the patient admitted as an inpatient or an outpatient? (I/O)\n"; //Options are I or O
	cin >> patientType;
	patientType = toupper(patientType);

	//Confirming that the user entered a valid option
	while (patientType != 'I' && patientType != 'O')
	{
		cout << "Sorry that's an invalid character.\nPlease try again.\n";
		cin >> patientType;
		patientType = toupper(patientType);
	}

	if (patientType == 'I') //Inpatient
	{
		int numDays;
		double dailyRate, medicalCharges, hospitalCharges;

		cout << "Inpatient\n";

		cout << "How many days were spent in the hospital?\n";		//Days spent
		cin >> numDays;
		if (numDays >= 0)
		{
			cout << "What was the daily rate?\n$";		//Daily rate
			cin >> dailyRate;
			if (dailyRate >= 0)
			{
				cout << "What was the cost of any medication charges?\n$";		//Medical Charges
				cin >> medicalCharges;
				if (medicalCharges >= 0)
				{
					cout << "Finally, what was the cost of any hospital services? (Labs, tests, etc)\n$";		//Hospital Charges
					cin >> hospitalCharges;
					if (hospitalCharges >= 0)
					{
						calculateTotal(numDays, dailyRate, medicalCharges, hospitalCharges);		//Calling calculating total function
					}
					else
					{
						cout << "An invalide input was entered. Please close the program and try again.";
						return(0);
					}
				}
				else
				{
					cout << "An invalide input was entered. Please close the program and try again.";
					return(0);
				}
			}
			else
			{
				cout << "An invalide input was entered. Please close the program and try again.";
				return(0);
			}
		}
		else
		{
			cout << "An invalide input was entered. Please close the program and try again.";
			return(0);
		}
	}
	else if (patientType == 'O') //Outpatient
	{
		double medicalCharges, hospitalCharges;

		cout << "Outpatient\n";

		cout << "What was the cost of any medication charges?\n$";		//Medical Charges
		cin >> medicalCharges;
		if (medicalCharges >= 0)
		{
			cout << "Finally, what was the cost of any hospital services? (Labs, tests, etc)\n$";		//Hospital Charges
			cin >> hospitalCharges;
			if (hospitalCharges >= 0)
			{
				calculateTotal(medicalCharges, hospitalCharges);		//Calling calculating total function (2nd version)
			}
			else
			{
				cout << "An invalide input was entered. Please close the program and try again.";
				return(0);
			}
		}
		else
		{
			cout << "An invalide input was entered. Please close the program and try again.";
			return(0);
		}
	}
}

