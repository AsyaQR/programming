#include<iostream>
#include"mylib.h"

using namespace std;

int main(int argc, char* argv[])
{
	bool flag = true;
	while (flag)
	{
		int num = 0;
		cout << "0 - Exit\n";
		cout << "1 - Count steps to 1\n";
		cout << "2 - Draw circle\n";
		cin >> num;

		switch (num)
		{
		case 0:
		{
			flag = false;
			break;
		}
		case 1:
		{
			int number = 0;
			cout << "Enter number: ";
			cin >> number;
			cout << count_of_steps(number) << endl;
			break;
		}
		case 2:
		{
			int r = 0;
			cout << "Enter radius: ";
			cin >> r;
			draw_circle(r);
			break;
		}
		}
	}
	return EXIT_SUCCESS;
}