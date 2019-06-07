#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	int mon, day;
	char con;

	do {
			cout << "Please enter your birthday in the order of month first and date second, leave a space between them, thanks." << endl;
	        cin >> mon >> day;

	switch (mon)
	{
		case 1:
		if (day >= 20 && day <= 31)
			cout << "The sign of horoscope for your birthday is Aquarius. \n" 
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Aquarius and Libra." << endl;
		else if (day == 18 || day == 19)
			cout << "The sign of horoscope for your birthday is Capricorn. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Aquarius." 
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else
			cout << "The sign of horoscope for your birthday is Capricorn."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		break;

		case 2:
		if (day >= 19 && day <= 29)
			cout << "The sign of horoscope for your birthday is Pisces."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		else if (day == 17 || day == 18)
			cout << "The sign of horoscope for your birthday is Aquarius. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Pisces."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Aquarius and Libra." << endl;
		else
			cout << "The sign of horoscope for your birthday is Aquarius."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Aquarius and Libra." << endl;
		break;

		case 3:
		if (day > 21 && day <= 31)
			cout << "The sign of horoscope for your birthday is Aries."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Leo, Aries and Sagittarius." << endl;
		else if (day == 18 || day == 19)
			cout << "The sign of horoscope for your birthday is Pisces. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Aries."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Aries. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Pisces."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Leo, Aries and Sagittarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Pisces."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		break;

		case 4:
		if (day >= 20 && day <= 30)
			cout << "The sign of horoscope for your birthday is Taurus."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else if (day == 18 || day == 19)
			cout << "The sign of horoscope for your birthday is Aries. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Taurus."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Aries."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		break;

		case 5:
		if (day >= 21 && day <= 31)
			cout << "The sign of horoscope for your birthday is Gemini."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Libra and Aquarius." << endl;
		else if (day == 19 || day ==20)
			cout << "The sign of horoscope for your birthday is Taurus. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Gemini."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else
			cout << "The sign of horoscope for your birthday is Taurus."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		break;

		case 6:
		if (day >= 22 && day <= 30)
			cout << "The sign of horoscope for your birthday is Cancer."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		else if (day == 20 || day == 21)
			cout << "The sign of horoscope for your birthday is Gemini. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Cancer."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else
			cout << "The sign of horoscope for your birthday is Gemini."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		break;

		case 7:
		if (day >= 23 && day <= 31)
			cout << "The sign of horoscope for your birthday is Leo."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Cancer. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Leo."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		else
			cout << "The sign of horoscope for your birthday is Cancer."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		break;

		case 8:
		if (day >= 23 && day <= 31)
			cout << "The sign of horoscope for your birthday is Virgo."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Leo. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Virgo."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Leo."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		break;

		case 9:
		if (day >= 23 && day <= 30)
			cout << "The sign of horoscope for your birthday is Libra."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Libra and Aquarius." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Virgo. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Libra."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else
			cout << "The sign of horoscope for your birthday is Virgo."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		break;

		case 10:
		if (day >= 23 && day <= 31)
			cout << "The sign of horoscope for your birthday is Scorpio."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Libra. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Scorpio."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Libra and Aquarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Libra."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Gemini, Libra and Aquarius." << endl;
		break;

		case 11:
		if (day >= 22 && day <= 30)
			cout << "The sign of horoscope for your birthday is Sagittarius."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		else if (day == 20 || day == 21)
			cout << "The sign of horoscope for your birthday is Scorpio. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Sagittarius."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		else
			cout << "The sign of horoscope for your birthday is Scorpio."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Cancer, Scorpio and Pisces." << endl;
		break;

		case 12:
		if (day >= 22 && day <= 31)
			cout << "The sign of horoscope for your birthday is Capricorn."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Taurus, Virgo and Capricorn." << endl;
		else if (day == 20 || day == 21)
			cout << "The sign of horoscope for your birthday is Sagittarius. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Capricorn."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Sagittarius."
		    << "The signs of horoscope that will be compatible for your birthday \n" 
		    << "are Aries, Leo and Sagittarius." << endl;
		break;
	}

	cout << "Do you want to repeat this calculation?" << endl;
	cin >> con;
	
	} while (con == 'y' || con == 'Y');



	return 0;

}