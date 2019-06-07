#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

const double ltg = 0.264179;

double milespergallon (double liters, double miles)
	{
		double mg;

		mg = (miles / liters) / ltg;

		return (mg);
	}

int main ()

{
	double lit, mtc, mpg;
	char con;

	do
	{
		cout << "Please enter the number of liters of gasoline by your car and the number of miles traveled by the car, leave one space between them, thanks." << endl;
	    cin >> lit >> mtc;

	    mpg = milespergallon (lit, mtc);

	    cout.setf (ios :: fixed);
	    cout.setf (ios :: showpoint);
	    cout.precision (2);

	    cout << "The number of miles per gallon the car delivered is:" << " " << mpg << "." << endl;

	    cout << "Do you want to repeat this calculation?" << endl;
	    cin >> con;

	} while (con == 'y' || con == 'Y');

	
	return 0;

}

	
