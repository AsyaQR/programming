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
		if (sqrt(i) == int(sqrt(i)))
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}