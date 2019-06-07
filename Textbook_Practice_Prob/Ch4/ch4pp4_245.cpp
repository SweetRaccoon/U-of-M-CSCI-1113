#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

double InflationRate (double priceoneyearago, double pricetoday)
{
	double rate;

	rate = ((pricetoday - priceoneyearago) / priceoneyearago) * 100;

	return (rate);
}

int main ()

{
	double ir, pago, ptod;
	char con;

	do
	{
		cout << "Please enter the price of an item one year ago and the price of an item today, leave one space between them, thanks." << endl;
		cin >> pago >> ptod;

		ir = InflationRate (pago, ptod);

		cout.setf (ios :: fixed);
		cout.setf (ios :: showpoint);
		cout.precision (2);

		cout << "The Inflation Rate is:" << " " << ir << "." << endl;

		cout << "Do you want to repeat this calculation?" << endl;
		cin >> con;

	} while (con == 'y' || con == 'Y');

	return 0;
}