#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int h1, m1, s1;
	int h2, m2, s2;
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;
	cout << (60 - s1 + s2) + (60 - m1 - 1 + m2) * 60 + (h2 - h1 - 1) * 3600 << endl;
	return EXIT_SUCCESS;
}