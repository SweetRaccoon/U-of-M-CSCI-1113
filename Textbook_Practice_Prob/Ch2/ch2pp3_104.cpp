#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	double speed, sec;
	int min;

	cout << "Please enter the speed of the treadmile in miles per hour (mph)." << endl;
	cin >> speed;

	min = static_cast <int> (60 / speed);

	sec = (60 / speed - min) * 60;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	cout << "The common pace of the treadmile in minutes and seconds per mile is: \n" << min << " " << "minutes"
	<< "and" << " " << sec << " " << "seconds per mile" << endl;

	return 0; 
}