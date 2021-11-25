#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int number = 0;
	cin >> number;
	int* bushes = new int[number] { 0 };
	for (int i = 0; i < number; ++i)
	{
		cin >> bushes[i];
	}
	int max = 0;
	for (int i = 0; i < number; ++i)
	{
		if (i == 0)
		{
			if (max < bushes[number - 1] + bushes[i] + bushes[i + 1])
			{
				max = bushes[number - 1] + bushes[i] + bushes[i + 1];
			}
		}
		else if (i == number - 1)
		{
			if (max < bushes[i - 1] + bushes[i] + bushes[0])
			{
				max = bushes[i - 1] + bushes[i] + bushes[0];
			}
		}
		else
		{
			if (max < bushes[i - 1] + bushes[i] + bushes[i + 1])
			{
				max = bushes[i - 1] + bushes[i] + bushes[i + 1];
			}
		}
	}
	cout << max << endl;
	return EXIT_SUCCESS;
}