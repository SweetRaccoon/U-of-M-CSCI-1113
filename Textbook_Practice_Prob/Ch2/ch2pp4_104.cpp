#include <iostream>
#include <string>

using namespace std;

int main ()

{
	string num, name, folname, food, col, ani, adj;

	cout << "Please enter the first or last name of your instructor, your name, a food, a number \n"
	<< "between 100 and 120, an adjective, a color and an animal to complete the story, thanks!" << endl;
	cin >> folname >> name >> food >> num >> adj >> col >> ani;
	cout << endl;


	cout << "Dear Instructor" << " " << folname << ", \n";
	cout << "I am sorry that I am unable to turn in my homwork at this time. First, \n" 
	<< "I ate a rotten" << " " << food  << ", which made me turn" << " " << col << "and extremely ill. I \n" 
	<< "came down with a fever of" << " " << num << ". Next my" << " " << adj << "pet \n" 
	<< ani << "must have smelled the remains of the" << " " << food << " " << "on my homework, \n"
	<< "because he ate it. I am currently rewriting my homework and hope you \n"
	<< "will accept it ate." << endl;
	cout << "Sincerely,\n";
	cout << name << endl;

	return 0;
}