#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int result = 0;

	cout << "Input n:" << endl;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		cin >> number;
		result += number;
	}

	cout << result << endl;
	return EXIT_SUCCESS;
}