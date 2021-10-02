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
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}