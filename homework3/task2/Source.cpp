#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int result = 1;

	cout << "Input n:" << endl;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		result *= 2;
	}
	cout << "2 ^ n = " << result << endl;
	return EXIT_SUCCESS;
}