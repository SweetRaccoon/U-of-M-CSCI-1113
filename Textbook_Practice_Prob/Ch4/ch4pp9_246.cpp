#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

double max (double num_1, double num_2, double num_3);

int main ()

{
	double n1, n2, n3, anw;
	char con;

	do
	{
		cout << "Enter the three numers in an order of number 1, number 2, and number 3, leave one space between each of them." << endl;
		cin >> n1 >> n2 >> n3;

		anw = max (n1, n2, n3);

		cout << "The maximum number among these three numbers is:" << " " << anw << "." << endl;

		cout << "Do you want to repeat this calculation?" << endl;
		cin >> con;

	} while (con == 'y' || con == 'Y');

	return 0;
}

double max (double num_1, double num_2, double num_3)
{
	double answer;

	if (num_1 == num_2 && num_2 == num_3)
		answer = num_1;
	else if (num_1 - num_2 > 0 && num_2 - num_3 >= 0)
		answer = num_1;
	else if (num_2 - num_1 > 0 && num_1 - num_3 >=0)
		answer = num_2;
	else
		answer = num_3;

	return (answer);

}