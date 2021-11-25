#include <iostream>

using namespace std;


int parity(int n)
{
	if (n % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


int main(int argc, char* argv[])
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	if (parity(x1) == parity(x2))
	{
		if (parity(y1) == parity(y2))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	if (parity(x1) != parity(x2))
	{
		if (parity(y1) == parity(y2))
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	return EXIT_SUCCESS;
}