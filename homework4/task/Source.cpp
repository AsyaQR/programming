#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int* numbers = new int[n];

	for (int i = 0; i < n; ++i)
	{
		int current_number = 0;
		cin >> current_number;
		numbers[i] = current_number;
	}

	cout << "ARRAY:";
	for (int i = 0; i < n; ++i)
	{
		cout << " " << numbers[i];
	}
	cout << endl;

	cout << "EVEN:";
	for (int i = 0; i < n; ++i)
	{
		if (numbers[i] % 2 == 0)
		{
			cout << " " << numbers[i];
		}
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += numbers[i];
	}
	cout << "SUM: " << sum << endl;

	bool negative = false;
	for (int i = 0; i < n; ++i)
	{
		if (numbers[i] < 0)
		{
			negative = true;
		}
	}
	if (negative)
	{
		int prod_neg = 1;
		for (int i = 0; i < n; ++i)
		{
			if (numbers[i] < 0)
			{
				prod_neg *= numbers[i];
			}
		}
		cout << "PRODUCT OF NEGATIVE: " << prod_neg << endl;
	}
	else
	{
		cout << "PRODUCT OF NEGATIVE: not negative" << endl;
	}

	int min = numbers[0];
	int index_min = 0;
	for (int i = 1; i < n; ++i)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
			index_min = i;
		}
	}
	cout << "FIRST MIN INDEX: " << index_min << endl;

	int max = numbers[0];
	int index_max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
			index_max = i;
		}
	}
	int second_max = numbers[0];
	if (index_max == 0)
	{
		second_max = numbers[1];
	}
	for (int i = 0; i < n; ++i)
	{
		if (numbers[i] > second_max && numbers[i] < max)
		{
			second_max = numbers[i];
		}
	}
	cout << "SECOND MAX: " << second_max << endl;

	cout << "REVERSE:";
	for (int i = 0; i < n; ++i)
	{
		cout << " " << numbers[n - i - 1];
	}
	cout << endl;

	cout << "ODD INDEXES:";
	for (int i = 1; i < n; i += 2)
	{
		cout << " " << numbers[i];
	}
	cout << endl;

	delete[] numbers;
	return EXIT_SUCCESS;
}