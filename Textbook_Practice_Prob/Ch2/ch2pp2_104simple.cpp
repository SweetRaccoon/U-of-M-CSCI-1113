#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	double n, r, g;
	const int i = 101;
	cout << "Please type any number you want to compute its square root here:" << endl;
	cin >> n;
	g = n / 2;

	do 
	{
		r = n / g;
		g = (g + r) / 2;

	} while (i <= 100);

	cout << "The square root of the number you typed above is:" << " " << g << endl;
	cout << "Thanks for participating in this square root calculation, Byebye!" << endl;



	return 0;
}