#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (c == 0 && d == 0)
	{
		cout << "Input a, b, c, d:" << endl;
		cin >> a >> b >> c >> d;
	}
	if (a == 0 && b == 0)
	{
		cout << "INF" << endl;
	}
	else if (-b / a == -d / c)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << -b / a << endl;
	}
	return EXIT_SUCCESS;
}
