#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int count = 0;
	cin >> count;
	int* result = new int[count];

	for (int i = 0; i < count; ++i)
	{
		int n = 0;
		int m = 0;
		cin >> n >> m;
		int d = 19 * m + (n + 239) * (n + 366) / 2;
		result[i] = d;
	}

	for (int i = 0; i < count; ++i)
	{
		cout << result[i] << endl;
	}

	return EXIT_SUCCESS;
}