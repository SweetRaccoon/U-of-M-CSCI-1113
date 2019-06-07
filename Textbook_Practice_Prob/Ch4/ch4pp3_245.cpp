#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

double valueofonestock (int wholedollar, int numerator, int denominator)
{
	double value;

	value = wholedollar + (numerator / denominator);

	return (value);
}

int main ()

{
	int wd, num, den;
	double val;
	char con;

	do
	{
		cout << "Please enter the whole-dollar portion of the price, the numerator and the denominator of the fraction portion, leave one space between each two of them, thanks." << endl;
	    cin >> wd >> num >> den;

	    val = valueofonestock (wd, num, den);

	    cout << "The value of your holding of one stock is:" << " " << val << "." << endl;

	    cout << "Do you want to repeat this calculation?" << endl;
	    cin >> con;

	} while (con == 'y' || con == 'Y');


	return 0;
}

