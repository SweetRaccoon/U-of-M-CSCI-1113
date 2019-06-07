#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	for (int num = 2; num < 100; num ++)
	// The outside for loop prints out all the numbers between 3 and 100
		for (int i = 2; i < num; i ++)
		{
			if (num % i == 0)
				break;
			// THis inner if_statement prints all the numbers between 3 and 100 which are not the prime numbers
			else if (num == i + 1)
				cout << num << " " << endl;
			// All the numbers between 3 and 100 which are not prime numbers adds 1 on them are all be the prime numbers
		}
		// The inner for loop is to check whether the numer is a prime number or not


	return 0;
}