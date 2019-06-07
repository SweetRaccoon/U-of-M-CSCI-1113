#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	int TC, TF;

	TF = (9 * TC) / 5 + 32;
	TC = 100;

	while (TC != TF)
	{
		TC --;
	}

	cout << "The temperature is the same at:" << " " << TC << endl;

	
		
	return 0;
}