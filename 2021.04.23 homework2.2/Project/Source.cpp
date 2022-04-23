#include<iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
	ArrayList list(5);
	cout << list << endl;
	list.pushend(5);
	cout << list << endl;
	list.pushbegin(4);
	list.pushbegin(3);
	list.pushend(2);
	list.insert(1, 3);
	cout << list << endl;
	list.pushbegin(0);
	cout << list << endl;
	list.sort();
	cout << list << endl;
	cout << list.extractend();
	cout << list << endl;
	cout << list.extract(3);
	cout << list << endl;

	list[1] = 1;
	cout << list << endl;
	list[5] = 10;
	cout << list << endl;
	list[16] = 20;
	cout << list << endl;
	list[-2] = 20;
	cout << list << endl;

	return 0;
}