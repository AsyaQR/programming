#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int x = 0;
	int y = 0;
	cin >> x;
	y = x * x;
	cout << (y + x) * (y + 1) + 1 << endl;
	return EXIT_SUCCESS;
}