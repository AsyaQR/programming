#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;
	bool up = true;
	bool down = true;
	bool right = true;
	bool left = true;
	while (M < 1 || M > 109 || N < 1 || N > 109)
	{
		cout << "Input size of matrix (height width):" << endl;
		cin >> M >> N;
	}
	while (x < 1 || x > N || y < 1 || y > M)
	{
		cout << "Input coordinates:" << endl;
		cin >> x >> y;
	}
	if (x == 1)
	{
		left = false;
	}
	if (y == 1)
	{
		up = false;
	}
	if (x == N)
	{
		right = false;
	}
	if (y == M)
	{
		down = false;
	}
	cout << "Neighboring cells:" << endl;
	if (left)
	{
		cout << x - 1 << " " << y << endl;
	}
	if (right)
	{
		cout << x + 1 << " " << y << endl;
	}
	if (up)
	{
		cout << x << " " << y - 1 << endl;
	}
	if (down)
	{
		cout << x << " " << y + 1 << endl;
	}
	return EXIT_SUCCESS;
}