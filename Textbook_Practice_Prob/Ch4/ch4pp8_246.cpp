#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int intabs (int int_number);

long longabs (long long_number);

float floatabs (float float_number);

double doubleabs (double double_number);

int main ()

{
	int in, ian;
	long ln, lan;
	float fn, fan;
	double dn, dan;
	char t, con;

	do
	{
	cout << "Enter the type of the number that you want to compute its abosolute avalue." << endl;
	cin >> t;

	if (t == 'i' || t == 'I')
	{
		cout << "Enter the number that you want to compute its abosolute value." << endl;
		cin >> in;
		ian = intabs (in);
		cout << "The abosolute value of the number you entered is:" << " " << ian << "." << endl;
	} 

	else if (t == 'l' || t == 'L')
	{
		cout << "Enter the number that you want to compute its abosolute avalue." << endl;
		cin >> ln;
		lan = longabs (ln);
		cout << "The abosolute value of the number you entered is:" << " " << lan << "." << endl;

	} 

	else if (t == 'f' || t == 'F')
	{
		cout << "Enter the number that you want to compute its abosolute avalue." << endl;
		cin >> fn;
		fan = floatabs (fn);
		cout << "The abosolute value of the number you entered is:" << " " << fan << "." << endl;

	} 

	else if (t == 'd' || t == 'D')
	{
		cout << "Enter the number that you want to compute its abosolute avalue." << endl;
		cin >> dn;
		dan = doubleabs (dn);
		cout << "The abosolute value of the number you entered is:" << " " << dan << "." << endl;

	} 

	cout << "Do you want to repeat this calculation?" << endl;
	cin >> con;

	} while (con == 'y' || con == 'Y');

	return 0;
}

int intabs (int int_number)
{
	int int_absolute_number;

	if (int_number >= 0)
		int_absolute_number = int_number;
	else
		int_absolute_number = 0 - int_number;

	return (int_absolute_number);
}

long longabs (long long_number)
{
	long long_absolute_number;

	if (long_number >= 0)
		long_absolute_number = long_number;
	else
		long_absolute_number = 0 - long_number;

	return (long_absolute_number);
}

float floatabs (float float_number)
{
	float float_absolute_number;

	if (float_number >= 0)
		float_absolute_number = float_number;
	else
		float_absolute_number = 0 - float_number;

	return (float_absolute_number);
}

double doubleabs (double double_number)
{
	double double_absolute_number;

	if (double_number >= 0)
		double_absolute_number = double_number;
	else
		double_absolute_number = 0 - double_number;

	return (double_absolute_number);
}
