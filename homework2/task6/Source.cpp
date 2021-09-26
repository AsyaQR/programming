#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	while (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8)
	{
		cout << "Input coordinates of the queen:" << endl;
		cin >> x1 >> y1;
	}
	while (x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8)
	{
		cout << "Input coordinates of the piece:" << endl;
		cin >> x2 >> y2;
	}
	if (x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y1 - y2))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}
