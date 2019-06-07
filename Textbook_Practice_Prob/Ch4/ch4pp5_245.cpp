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

double IncreaseCostOverOneYear (double pricetoday, double inflationrate)
{
	double increasecost = pricetoday * inflationrate;

	return (increasecost);
}

int main ()

{
	double ir, pago, ptod, inc1, inc2, p1, p2;
	char con;

	do
	{
		cout << "Please enter the price of an item one year ago and the price of an item today, leave one space between them, thanks." << endl;
		cin >> pago >> ptod;

		ir = InflationRate (pago, ptod);

		inc1 = IncreaseCostOverOneYear (ptod, ir);

		p1 = ptod + inc1;

		inc2 = IncreaseCostOverOneYear (p1, ir);

		p2 = p1 + inc2;

		cout.setf (ios :: fixed);
		cout.setf (ios :: showpoint);
		cout.precision (2);

		cout << "The Inflation Rate is:" << " " << ir << "." << endl;

		cout << "The estimated price of the ietm in one year and in two years from the time of the calculation are:" << " " << p1 << " " << "and" << " " << p2 << "." << endl;

		cout << "Do you want to repeat this calculation?" << endl;
		cin >> con;

	} while (con == 'y' || con == 'Y');

	return 0;
}