#include <iostream>
#include <cmath>

using namespace std;

double cosinus(int a, int b, int c)
{
	return -(pow(a, 2) - pow(b, 2) - pow(c, 2)) / 2 * b * c;
}


int main(int argc, char* argv[])
{
	int side1 = 0;
	int side2 = 0;
	int side3 = 0;
	cout << "Input lenghts of side of triangles:" << endl;
	cin >> side1 >> side2 >> side3;
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
	{
		cout << "impossible" << endl;
	}
	else if (cosinus(side1, side2, side3) == 0 || cosinus(side2, side3, side1) == 0 || cosinus(side3, side1, side2) == 0)
	{
		cout << "right" << endl;
	}
	else if (cosinus(side1, side2, side3) < 0 || cosinus(side2, side1, side3) < 0 || cosinus(side3, side2, side1) < 0)
	{
		cout << "obtuse" << endl;
	}
	else
	{
		cout << "acute" << endl;
	}
	return EXIT_SUCCESS;
}