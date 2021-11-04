#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int number = 0;
	cin >> number;

	int last_bit = ((~number & (1 << (sizeof(int) * 8 - 1))) >> (sizeof(int) * 8 - 1)) & 1 ^ 1;

	int help_number = 0;
	for (int i = 0; i < sizeof(int) * 8; ++i)
	{
		help_number |= last_bit << i;
	}

	cout << ((number ^ help_number) + last_bit) << endl;

	return EXIT_SUCCESS;
}