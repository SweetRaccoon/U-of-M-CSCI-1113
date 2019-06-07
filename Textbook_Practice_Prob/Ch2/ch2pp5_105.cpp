// This program is for user to compute the volume oof a sphere
// The prop is the constant proportion in the formula for the volume of a sphere, which is (4.0 / 3.0)
// The pi is a constant value which is 3.1415 in this case
// The radius is a independednt variable that need user to inout
// The volume is the dependednt variable that will be computed by this program as the output

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()

{
	double radius, volume;
	const double pi = 3.1415;
	const double prop = 4.0 / 3.0;

	cout << "Enter radius of a sphere." << endl;
	cin >> radius;

	volume = prop * pi * pow (radius, 3.0);

	cout << "The volume is:" << volume << endl;

	return 0;
}