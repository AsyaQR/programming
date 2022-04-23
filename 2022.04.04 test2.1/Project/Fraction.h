#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Fraction
{
private:
	long long numerator;
	long long denominator;

public:
	Fraction(long long numerator = 0, long long denominator = 0);
	Fraction(const Fraction& fraction);
	~Fraction();

	Fraction absf();
	Fraction powf(int n);
	Fraction reverse();
	Fraction operator=(Fraction& fraction);
	friend bool operator==(Fraction fraction1, Fraction fraction2);
	long long nod();
	friend bool operator<(Fraction fraction1, Fraction fraction2);
	friend bool operator<=(Fraction fraction1, Fraction fraction2);
	friend bool operator>(Fraction fraction1, Fraction fraction2);
	friend bool operator>=(Fraction fraction1, Fraction fraction2);
	friend Fraction operator+(Fraction fraction1, Fraction fraction2);
	friend Fraction operator*(Fraction fraction, double n);
	friend Fraction operator*(double n, Fraction fraction);
	friend Fraction operator*(Fraction fraction1, Fraction fraction2);
	friend Fraction operator/(Fraction fraction, double n);
	friend Fraction operator/(double n, Fraction& fraction);
	friend Fraction operator/(Fraction fraction1, Fraction fraction2);
	friend Fraction operator-(Fraction fraction1, Fraction fraction2);
	friend ostream& operator<<(ostream& stream, Fraction fraction);
};


