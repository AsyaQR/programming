#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	string one_hundred = "сто ";
	string two_hundred = "двести ";
	string three_hundred = "триста ";
	string four_hundred = "четыреста ";
	string five_hundred = "пятьсот ";
	string six_hundred = "шестьсот ";
	string seven_hundred = "семьсот ";
	string eight_hundred = "восемьсот ";
	string nine_hundred = "девятьсот ";
	string twenty = "двадцать ";
	string thirty = "тридать ";
	string fourty = "сорок ";
	string fifty = "пятьдесят ";
	string sixty = "шестьдесят ";
	string seventy = "семьдесят ";
	string eighty = "восемьдесят ";
	string ninety = "девяносто ";
	string ten = "десять ";
	string eleven = "одинадцать ";
	string twelve = "двенадцать ";
	string thirteen = "тринадцать ";
	string fourteen = "четырнадцать ";
	string fifteen = "пятнадцать ";
	string sixteen = "шестнадцать ";
	string seventeen = "семнадцать ";
	string eighteen = "восемнадцать ";
	string nineteen = "девятнадцать ";
	string one = "один ";
	string two = "два ";
	string three = "три ";
	string four = "четыре ";
	string five = "пять ";
	string six = "шесть ";
	string seven = "семь ";
	string eight = "восемь ";
	string nine = "девять ";
	string zero = "ноль ";
	int number = 0;
	int first_number = 0;
	int second_number = 0;
	int third_number = 0;
	string first = "";
	string second = "";
	string third = "";
	string fourth = "";

	cout << "Введите число:" << endl;
	cin >> number;
	if (number)
	{
		first_number = number / 100;
		second_number = number % 100 / 10;
		third_number = number % 10;
		switch (first_number)
		{
		case 1:
			first = one_hundred;
			break;
		case 2:
			first = two_hundred;
			break;
		case 3:
			first = three_hundred;
			break;
		case 4:
			first = four_hundred;
			break;
		case 5:
			first = five_hundred;
			break;
		case 6:
			first = six_hundred;
			break;
		case 7:
			first = seven_hundred;
			break;
		case 8:
			first = eight_hundred;
			break;
		case 9:
			first = nine_hundred;
			break;
		};
		switch (second_number)
		{
		case 1:
			switch (third_number)
			{
			case 0:
				second = ten;
				break;
			case 1:
				second = eleven;
				break;
			case 2:
				second = twelve;
				break;
			case 3:
				second = thirteen;
				break;
			case 4:
				second = fourteen;
				break;
			case 5:
				second = fifteen;
				break;
			case 6:
				second = sixteen;
				break;
			case 7:
				second = seventeen;
				break;
			case 8:
				second = eighteen;
				break;
			case 9:
				second = nineteen;
				break;
			};
		case 2:
			second = twenty;
			break;
		case 3:
			second = thirty;
			break;
		case 4:
			second = fourty;
			break;
		case 5:
			second = fifty;
			break;
		case 6:
			second = sixty;
			break;
		case 7:
			second = seventy;
			break;
		case 8:
			second = eighty;
			break;
		case 9:
			second = ninety;
			break;
		};
		if (second_number != 1)
		{
			switch (third_number)
			{
			case 1:
				third = one;
				break;
			case 2:
				third = two;
				break;
			case 3:
				third = three;
				break;
			case 4:
				third = four;
				break;
			case 5:
				third = five;
				break;
			case 6:
				third = six;
				break;
			case 7:
				third = seven;
				break;
			case 8:
				third = eight;
				break;
			case 9:
				third = nine;
				break;
			};
		}
		if (third_number == 1)
		{
			fourth = "банан";
		}
		else if (third_number == 2 || third_number == 3 || third_number == 4)
		{
			fourth = "банана";
		}
		else
		{
			fourth = "бананов";
		}
		cout << first << second << third << fourth << endl;
	}
	else
	{
		cout << zero << "бананов" << endl;
	}
	return EXIT_SUCCESS;
}