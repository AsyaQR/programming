#include <iostream>

using namespace std;

int main(int args, char* argv[]) {
	int x = 0;
	cin >> x;
	cout << "The next number for the number " << x << " is " << x + 1 << "." << endl;
	cout << "The previous number for the number " << x << " is " << x - 1 << "." << endl;
	return EXIT_SUCCESS;
}