#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int x = 0;
	cin >> x;
	cout << x / 100 + x % 100 / 10 + x % 10 << endl;
	return EXIT_SUCCESS;
}