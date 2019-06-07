#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	double accbal, totam, inter, minpay, intrat;
	char con;

	do
	{
		cout << "Please enter your account balance, thanks." << endl;
	cin >> accbal;

	if (accbal <= 1000)
		inter = accbal * 0.015;
	else
		inter = (1000 * 0.015) + ((accbal - 1000) * 0.01);

	totam = accbal + inter;

	cout << inter << " " << totam;

	if (totam <= 10)
		minpay = totam;
	else
		if ((totam * 0.1) <= 10)
			minpay = 10;
		else
			minpay = totam * 0.1;

	cout.setf (ios :: fixed);
	cout.setf (ios :: showpoint);
	cout.precision (2);

	cout << "The interest due is:" << inter <<"," << endl;
	cout << "The total amount due is:" << " " << totam <<endl; 
	cout << "The minimum payment for a resolving credit account is:" << " " << minpay << endl;

	cout << "Do you want to repeat this calculation?" << endl;
	cin >> con;

	} while (con == 'y' || con == 'Y');
	

	return 0;
}