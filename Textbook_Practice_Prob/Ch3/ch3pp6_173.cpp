#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	const double γ = 62.4;
	double r, W, V, F_b;
	const double pi = 3.1415;

	cout << "Please enter the weight (in pounds) and radius (in feet) of a sphere, leave one space between them, thanks." << endl;
	cin >> W >> r;

	V = (4.0 / 3.0) * pi * pow (r,3);

	F_b = V * γ;

	if (F_b >= W)
		cout << "This sphere will float in water." << endl;
	else
		cout << "This sphere will sink in water." << endl;

	return 0;
}