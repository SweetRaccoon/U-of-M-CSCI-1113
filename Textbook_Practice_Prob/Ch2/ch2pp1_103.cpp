#include <iostream>

using namespace std;

int main()
{   
	double pbw, tb;
	long double mtw;
	mtw = 35273.92;
	char rc;

	do
	{
		cout << "Please type the weight of a package of breakfast cereal in ounces" << endl;
		cin >> pbw;
		tb = pbw / mtw;

		cout << "The weight in metric tons as well as the number of boxes needed to yield 1 metric ton of cereal is" << " " << tb << endl;

		cout << "Do you want to repeat this calculation?" << endl;
		cin >> rc;

	} while (rc == 'y' || rc == 'Y');

	cout << "Thanks for participating this calculation, Byebye!" << endl;

	return 0;
}
