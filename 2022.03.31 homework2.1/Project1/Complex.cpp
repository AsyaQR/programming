#include "Complex.h"

double Complex::sqrabs()
{
	return pow(this->re, 2) + pow(this->im, 2);
}

Complex::Complex(double re, double im) : re(re), im(im) {}

Complex::Complex(const Complex& complex) : re(complex.re), im(complex.im) {}

Complex::~Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex& Complex::operator=(Complex& complex)
{
	this->re = complex.re;
	this->im = complex.im;
	return *this;
}

double Complex::abs()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

double Complex::arg()
{
	if (this->re != 0 or this->im != 0)
	{
		return acos(this->re / this->abs());
	}
}

Complex Complex::reverse()
{
	return Complex(this->re, -this->im);
}

void Complex::roots(int n, std::ostream& stream)
{
	for (int i = 1; i <= n; ++i)
	{
		stream << "Root" << i << ": ";
		stream <<  pow(this->abs(), 1 / n) * Complex(cos((this->arg() + 2 * pi * i) / n), sin((this->arg() + 2 * pi * i) / n)) << endl;
	}
}

Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.re * complex2.re - complex1.im * complex2.im, complex1.im * complex2.re + complex2.im * complex1.re);
}

Complex operator*(double d, Complex complex)
{
	return Complex(complex.re * d, complex.im * d);
}

Complex operator*(Complex complex, double d)
{
	return Complex(complex.re * d, complex.im * d);
}

Complex operator+(Complex complex1, Complex complex2)
{
	return Complex(complex1.re + complex2.re, complex1.im + complex2.im);
}

Complex operator/(Complex complex, double d)
{
	return Complex(complex.re / d, complex.im / d);
} 

Complex operator/(Complex complex1, Complex complex2)
{
	return complex1 * complex2.reverse() / complex2.abs();
}

Complex operator-(Complex complex1, Complex complex2)
{
	return Complex(complex1.re - complex2.re, complex1.im - complex2.im);
}

std::ostream& operator<<(ostream& stream, const Complex& complex)
{
	if (complex.im == 0)
	{
		stream << complex.re;
	}
	else if (complex.im > 0)
	{
		if (complex.im == 1)
		{
			stream << complex.re << " + i";
		}
		else
		{
			stream << complex.re << " + " << complex.im << " * i";
		}
	}
	else
	{
		if (complex.im == -1)
		{
			stream << complex.re << " - i";
		}
		else
		{
			stream << complex.re << " - " << -complex.im << " * i";
		}
	}
	return stream;
}
