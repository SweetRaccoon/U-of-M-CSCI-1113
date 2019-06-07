#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

double const G = 6.673 * pow (10, -8);

double GravitationalForce (double mass_1, double mass_2, double distance);

int main ()

{
	double m1, m2, d, gf;
	char con;

	do
	{
		cout << "Enter the masses of the two objects, which are object 1 and object 2, also enter the distance between these two objects, leave one space between each of them." << endl;
		cin >> m1 >> m2 >> d;

		gf = GravitationalForce (m1, m2, d);

		cout << "The Gravitational Attractive Force is:" << " " << gf << "." << endl;

		cout << "Do you want to repeat this calculation?" << endl;
		cin >> con;

	} while (con == 'y' || con == 'Y');

	return 0;
}

double GravitationalForce (double mass_1, double mass_2, double distance)
{
	double gravitational_attractive_force;

	gravitational_attractive_force = ((G * mass_1 * mass_2) / (pow (distance, 2)));

	cout.setf (ios :: fixed);
	cout.setf (ios :: showpoint);
	cout.precision (3);

	return (gravitational_attractive_force);
}