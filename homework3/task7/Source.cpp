#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cout << "Input a, b, c, d:" << endl;
	cin >> a >> b >> c >> d;

	for (int i = 0; i < 1000; ++i)
	{
		if (a * i * i * i + b * i * i + c * i + d == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;
	return EXIT_SUCCESS;
}