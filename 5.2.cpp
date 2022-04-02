// 5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int month, day;
	string zodiac_sign = "";
	string month_name = "";
	cout << "The program will return the equivalent zodiac sign";
	cout << "\nEnter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;

	switch (month) {
	case 1:
		//january
		month_name = "January";
		if (day < 20)
			zodiac_sign = "Capricorn";
		else
			zodiac_sign = "aquarius";

		break;

	case 2:
		//february
		month_name = "February";
		if (day < 19)
			zodiac_sign = "Aquarius";
		else
			zodiac_sign = "pisces";

		break;

	case 3:
		//march
		month_name = "March";
		if (day < 21)
			zodiac_sign = "Pisces";
		else
			zodiac_sign = "aries";

		break;

	case 4:
		//april
		month_name = "April";
		if (day < 20)
			zodiac_sign = "Aries";
		else
			zodiac_sign = "taurus";

		break;

	case 5:
		//may
		month_name = "May";
		if (day < 21)
			zodiac_sign = "Taurus";
		else
			zodiac_sign = "gemini";

		break;
	case 6:
		//june
		month_name = "June";
		if (day < 21)
			zodiac_sign = "Gemini";
		else
			zodiac_sign = "cancer";

		break;
	case 7:
		//july
		month_name = "July";
		if (day < 23)
			zodiac_sign = "Cancer";
		else
			zodiac_sign = "leo";

		break;
	case 8:
		//august
		month_name = "August";
		if (day < 23)
			zodiac_sign = "Leo";
		else
			zodiac_sign = "virgo";

		break;
	case 9:
		//september
		month_name = "September";
		if (day < 23)
			zodiac_sign = "Virgo";
		else
			zodiac_sign = "libra";

		break;
	case 10:
		//october
		month_name = "October";
		if (day < 23)
			zodiac_sign = "Libra";
		else
			zodiac_sign = "scorpio";

		break;
	case 11:
		//november
		month_name = "November";
		if (day < 22)
			zodiac_sign = "scorpio";
		else
			zodiac_sign = "sagittarius";

		break;
	case 12:
		//december
		month_name = "December";
		if (day < 22)
			zodiac_sign = "Sagittarius";
		else
			zodiac_sign = "capricorn";

		break;
	}

	cout << "Sodiac sign for " << month_name << " " << day << " is " << zodiac_sign;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file