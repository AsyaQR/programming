#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int year = 0;
	cout << "Input year:" << endl;
	cin >> year;
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}