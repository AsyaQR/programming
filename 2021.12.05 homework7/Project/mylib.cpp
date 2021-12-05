#include<iostream>
#include<math.h>
#include"mylib.h"

using namespace std;

int COUNT = 0;

int count_of_steps(int number)
{
	if (number == 1)
	{
		int result = COUNT;
		COUNT = 0;
		return result;
	}
	else if (number % 2 == 0)
	{
		COUNT++;
		count_of_steps(number / 2);
	}
	else
	{
		COUNT++;
		count_of_steps(3 * number + 1);
	}
}


void draw_circle(int r)
{
	for (double i = 0; i <= 2 * r; ++i)
	{
		int h = 0;
		h = cos(asin(i / r - 1)) * r;
		for (int j = 0; j <= 2 * r; ++j)
		{
			if (j == r - h)
			{
				cout << "* ";
			}
			else if (j == r + h)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}
}