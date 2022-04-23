#include "Fraction.h"

Fraction::Fraction(long long numerator, long long denominator)
{
	if (numerator < 0 && denominator > 0 || numerator >= 0 && denominator > 0)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}
	else if (numerator < 0 && denominator < 0 || numerator >= 0 && denominator < 0)
	{
		this->numerator = -numerator;
		this->denominator = -denominator;
	}
}

Fraction::Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}

Fraction::~Fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}

Fraction Fraction::absf()
{
	if (this->numerator >= 0)
	{
		return Fraction(this->numerator, this->denominator);
	}
	else
	{
		return Fraction(-this->numerator, this->denominator);
	}
}

Fraction Fraction::powf(int n)
{
	return Fraction(pow(this->numerator, n), pow(this->denominator, n));
}

Fraction Fraction::reverse()
{
	return Fraction(this->denominator, this->numerator);
}


Fraction Fraction::operator=(Fraction& fraction)
{
	this->numerator = fraction.numerator;
	this->denominator = fraction.denominator;
	return *this;
}

long long Fraction::nod()
{
	long long result = 1;
	for (long long i = 1; i < min(abs(this->numerator), abs(this->denominator)); ++i)
		{
		if (this->numerator / i == 0 and this->denominator / i == 0)
		{
			result = i;
		}
	}
	return result;
}

bool operator==(Fraction fraction1, Fraction fraction2)
{
	if (fraction1.denominator == fraction2.numerator && fraction1.denominator == fraction2.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(Fraction fraction1, Fraction fraction2)
{
	if(fraction1.numerator * fraction2.denominator < fraction2.numerator * fraction1.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<=(Fraction fraction1, Fraction fraction2)
{
	if (fraction1.numerator * fraction2.denominator <= fraction2.numerator * fraction1.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator>(Fraction fraction1, Fraction fraction2)
{
	if (fraction1.numerator * fraction2.denominator > fraction2.numerator * fraction1.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator>=(Fraction fraction1, Fraction fraction2)
{
	if (fraction1.numerator * fraction2.denominator >= fraction2.numerator * fraction1.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Fraction operator+(Fraction fraction1, Fraction fraction2)
{
	long long nod = Fraction(fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator, fraction1.denominator * fraction2.denominator).nod();
	return Fraction((fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator) / nod, fraction1.denominator * fraction2.denominator / nod);
}

Fraction operator*(Fraction fraction, double n)
{
	long long nod = Fraction(fraction.numerator * n, fraction.denominator).nod();
	return Fraction(fraction.numerator * n / nod, fraction.denominator / nod);
}

Fraction operator*(double n, Fraction fraction)
{
	long long nod = Fraction(fraction.numerator * n, fraction.denominator).nod();
	return Fraction(fraction.numerator * n / nod, fraction.denominator / nod);
}

Fraction operator*(Fraction fraction1, Fraction fraction2)
{
	long long nod = Fraction(fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator).nod();
	return Fraction(fraction1.numerator * fraction2.numerator / nod, fraction1.denominator * fraction2.denominator / nod);
}

Fraction operator/(Fraction fraction, double n)
{
	long long nod = Fraction(fraction.numerator, fraction.denominator * n).nod();
	return Fraction(fraction.numerator / nod, fraction.denominator * n / nod);
}

Fraction operator/(double n, Fraction& fraction)
{
	return n * fraction.reverse();
}

Fraction operator/(Fraction fraction1, Fraction fraction2)
{
	return fraction1 * fraction2.reverse();
}

Fraction operator-(Fraction fraction1, Fraction fraction2)
{
	long long nod = Fraction(fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator, fraction1.denominator * fraction2.denominator).nod();
	return Fraction((fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator) / nod, fraction1.denominator * fraction2.denominator / nod);
}

ostream& operator<<(ostream& stream, Fraction fraction)
{
	if (fraction.numerator == 0)
	{
		stream << 0;
	}
	else if (fraction.denominator == 1)
	{
		stream << fraction.numerator;
	}
	else
	{
		stream << fraction.numerator << " / " << fraction.denominator;
	}
	return stream;
}
