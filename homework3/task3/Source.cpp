#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int current_number = 1;
	int current_row = 1;

	cout << "Input n:" << endl;
	cin >> n;

	while (current_number < n + 1)
	{
		for (int i = 0; i < current_row; ++i)
		{
			cout << current_number << " ";
			++current_number;
			if (current_number > n)
			{
				break;
			}
		}
		cout << endl;
		++current_row;
	}
	return EXIT_SUCCESS;
}