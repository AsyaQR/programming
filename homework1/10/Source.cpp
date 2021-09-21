#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	int k = 0;
	cin >> a >> b;
	t = a / b;
	k = b / a;
	t = (t + 2) % (t + 1);
	t = t % 2;
	k = (k + 2) % (k + 1);
	k = k % 2;
	cout << t * a + k * b;

	return EXIT_SUCCESS;
}

// увы, получилось только для натуральных чисел =(