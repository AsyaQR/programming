#include <iostream>

using namespace std;

int abs(int number)
{
	int last_bit = ((~number & (1 << (sizeof(int) * 8 - 1))) >> (sizeof(int) * 8 - 1)) & 1 ^ 1;

	int help_number = 0;
	for (int i = 0; i < sizeof(int) * 8; ++i)
	{
		help_number |= last_bit << i;
	}

	return (number ^ help_number) + last_bit;
}


int main(int argc, char* argv[])
{
	double number = 0;
	cin >> number;
	long long value = *((long long*)&number);

	value = value >> 32;
	for (int i = 0; i < sizeof(long long) * 8 / 2; ++i)
	{
		int current_bit = sizeof(long long) * 8 / 2 - i - 1;
		long long mask = 1 << current_bit;

		cout << abs((value & mask) >> current_bit);

		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	value = *((long long*)&number);
	for (int i = 0; i < sizeof(long long) * 8 / 2; ++i)
	{
		int current_bit = sizeof(long long) * 8 / 2 - i - 1;
		long long mask = 1 << current_bit;

		cout << abs(((value & mask) >> current_bit) % 2);

		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}

	return EXIT_SUCCESS;
}