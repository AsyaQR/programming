#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int number = 0;
	int first_i = 0;
	int second_i = 0;
	cin >> number >> first_i >> second_i;

	int result = 0;
	result = ~(1 << first_i) & ~(1 << second_i) & number;                   // number without needed bits
	result = result | (((1 << first_i) & number) >> first_i << second_i);   // add first bit on second place
	result = result | (((1 << second_i) & number) >> second_i << first_i);  // add second bit on first place
	
	cout << result << endl;

	return EXIT_SUCCESS;
}
