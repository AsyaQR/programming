#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int count = 0;
	cin >> count;
	int current_time = 0;
	current_time = 540;
	for (int i = 0; i < count; ++i)
	{
		if (i != count - 1)
		{
			if (i % 2 == 0)
			{
				current_time += 5;
			}
			else
			{
				current_time += 15;
			}
		}
		current_time += 45;
	}
	cout << current_time / 60 << " " << current_time % 60 << endl;
	return EXIT_SUCCESS;
}