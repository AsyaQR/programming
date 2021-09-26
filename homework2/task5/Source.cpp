#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	cout << "Input k:" << endl;
	cin >> k;
	if (k % 4)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	return EXIT_SUCCESS;
}