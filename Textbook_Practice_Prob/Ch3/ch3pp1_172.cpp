#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	char p1, p2, con;

	do {
		cout << "Hey Player_1, please enter only one type chosen from P, R, W, or S, thanks." << endl;
	cin >> p1;
	cout << "Hey Player_2, please enter only one type chosen from P, R, W, or S, thanks." << endl;
	cin >> p2;


	switch (p1)

	{
		case ('P' | 'p'):
		{
			if (p2 == 'R' || p2 == 'r')
				cout << "The winner of this game is Player_1, because paper covers rock." << endl;
			else if (p2 == 'S' || p2 == 's')
				cout << "The winner of this game is Player_2, because scissors cut paper." << endl;
			else
				cout << "Nobody wins this game." << endl;
		}
		break;

		case ('R' | 'r'):
		{
			if (p2 == 'P' || p2 == 'p')
				cout << "The winner of this game is Player_2, because paper covers rock." << endl;
			else if (p2 == 'S' || p2 == 's')
				cout << "The winner of this game is Player_1, because rock break scissors." << endl;
			else
				cout << "Nobody wins this game." << endl;
		}
		break;

		case ('S' | 's'):
		{
			if (p2 == 'P' || p2 == 'p')
				cout << "The winner of this game is Player_1, because scissors cut paper." << endl;
			else if (p2 == 'R' || p2 == 'r')
				cout << "The winner of this game is Player_2, because rock break scissors." << endl;
			else
				cout << "Nobody wins this game." << endl;
		}
		break;
	}

	cout << "Do you both want to continue playing this game?" << endl;
	cin >> con;

	} while (con == 'y' || con == 'Y');


	return 0;
}