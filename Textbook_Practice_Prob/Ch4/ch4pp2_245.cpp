#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

const double ltg = 0.264179;

double milespergallon1 (double liters1, double miles1)
	{
		double mg1, mg2;

		mg1 = (miles1 / liters1) / ltg;

		return (mg1);
	}

double milespergallon2 (double liters2, double miles2)
	{
		double mg1, mg2;

		mg2 = (miles2 / liters2) / ltg;

		return (mg2);
	}

int main ()

{
	double lit1, lit2, mtc1, mtc2, mpg1, mpg2;
	char con;

	do
	{
		cout << "Please enter the number of liters of gasoline by your car_1, car_2 and the number of miles traveled by each of these two cars, leave one space between each two of them, thanks." << endl;
	    cin >> lit1 >> mtc1 >> lit2 >> mtc2;

	    mpg1 = milespergallon1 (lit1, mtc1);
	    mpg2 = milespergallon2 (lit2, mtc2);

	    cout.setf (ios :: fixed);
	    cout.setf (ios :: showpoint);
	    cout.precision (2);

	    cout << "The number of miles per gallon for the two cars in the order of car_1 and car_2 delivered are:" << " " << mpg1 << " " << "and" << mpg2 << "." << endl;

	    if (mpg1 > mpg2)
	    	cout << "The car_1 has the best fuel efficiency." << endl;
	    else if (mpg2 > mpg1)
	    	cout << "The car_2 has the best fuel efficiency." << endl;
	    else
	    	cout << "The car_1 and car_2 have the same fuel efficiency." << endl;

	    cout << "Do you want to repeat this calculation?" << endl;
	    cin >> con;

	} while (con == 'y' || con == 'Y');

	
	return 0;

}

	
