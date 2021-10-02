#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int result = 1;

	cout << "Input n:" << endl;
	cin >> n;

	for (int i = 1; i < n + 1; ++i)
	{
		result *= i;
	}
	cout << "n! = " << result << endl;
	return EXIT_SUCCESS;
}