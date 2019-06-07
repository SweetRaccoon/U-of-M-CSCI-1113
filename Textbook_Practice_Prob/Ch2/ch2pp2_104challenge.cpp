#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	double n, r, g, ng, error;

	cout << "Please type any number you want to compute its square root here:" << endl;
	cin >> n;
	g = n / 2;

	do 
	{
		r = n / g;
		ng = (g + r) / 2;
		error = (ng - g) / ng;

	} while (error > 0.01);

	cout << "The square root of the number you typed above is:" << " " << ng << endl;
	cout << "Thanks for participating in this square root calculation, Byebye!" << endl;



	return 0;
}