#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

double computeinterest (double initial_balance, double interest_rate, int number_of_months);


int main ()

{
	int nm;
	double ib, ir, iid, id;
	char con;

	do
	{
			cout << "Enter the initial balance, interest rate and number of months in the order, leave one space between each of them." << endl;
	        cin >> ib >> ir >> nm;

	        id = computeinterest (ib, ir, nm);

	        cout << "The interest due is:" << " " << id << "." << endl;

	        cout << "Do you want to repeat this calculation?" << endl;
	        cin >> con;

	} while (con == 'y' || con == 'Y');


	return 0;
}

double computeinterest (double initial_balance, double interest_rate, int number_of_months)
{
	double initial_interest_due, interest_due;

	if (number_of_months == 1)
		interest_due = initial_balance * interest_rate * number_of_months;
	else
		do
	{
		initial_interest_due = initial_balance * interest_rate;
		initial_balance = initial_balance + initial_interest_due;
		interest_due = initial_balance * interest_rate;
		initial_interest_due = interest_due;
		number_of_months = number_of_months - 1;

	} while (number_of_months > 1);

	cout.setf (ios :: fixed);
	cout.setf (ios :: showpoint);
	cout.precision (3);
	
	return (interest_due);
}