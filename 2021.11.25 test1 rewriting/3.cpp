#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int size = 0;
	cin >> size;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			int road = 0;
			cin >> road;
			if (j > i && road)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return EXIT_SUCCESS;
}