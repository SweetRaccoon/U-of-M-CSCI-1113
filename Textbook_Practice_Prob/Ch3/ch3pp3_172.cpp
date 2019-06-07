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
			cout << "The sign of horoscope for your birthday is Aquarius." << endl;
		else if (day == 18 || day == 19)
			cout << "The sign of horoscope for your birthday is Capricorn. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Aquarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Capricorn." << endl;
		break;

		case 2:
		if (day >= 19 && day <= 29)
			cout << "The sign of horoscope for your birthday is Pisces." << endl;
		else if (day == 17 || day == 18)
			cout << "The sign of horoscope for your birthday is Aquarius. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Pisces." << endl;
		else
			cout << "The sign of horoscope for your birthday is Aquarius." << endl;
		break;

		case 3:
		if (day > 21 && day <= 31)
			cout << "The sign of horoscope for your birthday is Aries." << endl;
		else if (day == 18 || day == 19)
			cout << "The sign of horoscope for your birthday is Pisces. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Aries." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Aries. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Pisces." << endl;
		else
			cout << "The sign of horoscope for your birthday is Pisces." << endl;
		break;

		case 4:
		if (day >= 20 && day <= 30)
			cout << "The sign of horoscope for your birthday is Taurus." << endl;
		else if (day == 18 || day == 19)
			cout << "The sign of horoscope for your birthday is Aries. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Taurus." << endl;
		else
			cout << "The sign of horoscope for your birthday is Aries." << endl;
		break;

		case 5:
		if (day >= 21 && day <= 31)
			cout << "The sign of horoscope for your birthday is Gemini." << endl;
		else if (day == 19 || day ==20)
			cout << "The sign of horoscope for your birthday is Taurus. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Gemini." << endl;
		else
			cout << "The sign of horoscope for your birthday is Taurus." << endl;
		break;

		case 6:
		if (day >= 22 && day <= 30)
			cout << "The sign of horoscope for your birthday is Cancer." << endl;
		else if (day == 20 || day == 21)
			cout << "The sign of horoscope for your birthday is Gemini. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Cancer." << endl;
		else
			cout << "The sign of horoscope for your birthday is Gemini." << endl;
		break;

		case 7:
		if (day >= 23 && day <= 31)
			cout << "The sign of horoscope for your birthday is Leo." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Cancer. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Leo." << endl;
		else
			cout << "The sign of horoscope for your birthday is Cancer." << endl;
		break;

		case 8:
		if (day >= 23 && day <= 31)
			cout << "The sign of horoscope for your birthday is Virgo." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Leo. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Virgo." << endl;
		else
			cout << "The sign of horoscope for your birthday is Leo." << endl;
		break;

		case 9:
		if (day >= 23 && day <= 30)
			cout << "The sign of horoscope for your birthday is Libra." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Virgo. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Libra." << endl;
		else
			cout << "The sign of horoscope for your birthday is Virgo." << endl;
		break;

		case 10:
		if (day >= 23 && day <= 31)
			cout << "The sign of horoscope for your birthday is Scorpio." << endl;
		else if (day == 21 || day == 22)
			cout << "The sign of horoscope for your birthday is Libra. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Scorpio." << endl;
		else
			cout << "The sign of horoscope for your birthday is Libra." << endl;
		break;

		case 11:
		if (day >= 22 && day <= 30)
			cout << "The sign of horoscope for your birthday is Sagittarius." << endl;
		else if (day == 20 || day == 21)
			cout << "The sign of horoscope for your birthday is Scorpio. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Sagittarius." << endl;
		else
			cout << "The sign of horoscope for your birthday is Scorpio." << endl;
		break;

		case 12:
		if (day >= 22 && day <= 31)
			cout << "The sign of horoscope for your birthday is Capricorn." << endl;
		else if (day == 20 || day == 21)
			cout << "The sign of horoscope for your birthday is Sagittarius. \n"
		    << "Your birthday is on a 'cusp' and the horoscope for the nearest adjacent sign is Capricorn." << endl;
		else
			cout << "The sign of horoscope for your birthday is Sagittarius." << endl;
		break;
	}

	cout << "Do you want to repeat this calculation?" << endl;
	cin >> con;
	
	} while (con == 'y' || con == 'Y');



	return 0;

}