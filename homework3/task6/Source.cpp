#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int count_of_zero = 0;
	int count_of_pos = 0;
	int count_of_neg = 0;

	cout << "Input n:" << endl;
	cin >> n;

	for (int i = 1; i < n + 1; ++i)
	{
		int current_number = 0;
		cin >> current_number;
		if (current_number == 0)
		{
			++count_of_zero;
		}
		else if (current_number < 0)
		{
			++count_of_neg;
		}
		else
		{
			++count_of_pos;
		}
	}

	cout << count_of_zero << " " << count_of_pos << " " << count_of_neg << endl;
	return EXIT_SUCCESS;
}