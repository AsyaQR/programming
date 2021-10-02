#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int result = 1;
	cout << "Input n, k:" << endl;
	cin >> n >> k;
	for (int i = 1; i < n + 1; ++i)
	{
		result *= i;
	}
	for (int i = 1; i < k + 1; ++i)
	{
		result /= i;
	}
	for (int i = 1; i < n - k + 1; ++i)
	{
		result /= i;
	}
	cout << result << endl;
	return EXIT_SUCCESS;
}