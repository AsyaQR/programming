#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cout << "Input a, b:" << endl;
	cin >> a >> b;

	for (int i = a; i < b + 1; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			if (i == j * j)
			{
				cout << i << endl;
			}
		}
	}

	cout << endl;
	return EXIT_SUCCESS;
}