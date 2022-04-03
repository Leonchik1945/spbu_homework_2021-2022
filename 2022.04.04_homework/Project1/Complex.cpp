#include "Complex.h"

Complex::Complex(double Re, double Im) : Re(Re), Im(Im) {}
Complex::Complex(const Complex& complex) : Re(complex.Re), Im(complex.Im) {}
Complex::~Complex()
{
	this->Re = 0;
	this->Im = 0;
}

double Complex::getRe()
{
	return this->Re;
}

void Complex::setRe(double Re)
{
	this->Re = Re;
}

double Complex::getIm()
{
	return this->Im;
}

void Complex::setIm(double Im)
{
	this->Im = Im;
}

void Complex::set(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

void Complex::print()
{
	if (this->Im == 0)
	{
		std::cout << this->Re << std::endl;
	}
	else if (this->Re == 0)
	{
		if (this->Im == 0)
		{
			std::cout << "0" << std::endl;
		}
		else if (this->Im == 1)
		{
			std::cout << "i" << std::endl;
		}
		else if (this->Im == -1)
		{
			std::cout << "-i" << std::endl;
		}
		else
		{
			std::cout << this->Im << "i" << std::endl;
		}
	}
	else
	{
		if (this->Im == 1)
		{
			std::cout << this->Re << "+" << "i" << std::endl;
		}
		else if (this->Im == -1)
		{
			std::cout << this->Re << "i" << std::endl;
		}
		else if (this->Im < 0)
		{
			std::cout << this->Re << this->Im << "i" << std::endl;
		}
		else
		{
			std::cout << this->Re << "+" << this->Im << "i" << std::endl;
		}
	}
}

void Complex::operator=(const Complex& z)
{
	this->Re = z.Re;
	this->Im = z.Im;
}

Complex Complex::power(int s)
{
	Complex z(this->Re, this->Im);
	Complex res(this->Re, this->Im);
	for (int i = 0; i < s; ++i)
	{
		res = res * z;
	}
	return res;
}

double Complex::abs()
{
	return sqrt((this->Re * this->Re + this->Im * this->Im));
}

double Complex::arg()
{
	double pi = 3.141592;
	if (this->Re == 0 && this->Im == 0)
	{
		return 0;
	}
	else if (this->Im < 0)
	{
		return (2 * pi - acos(this->Re / this->abs()));
	}
	return acos(this->Re / this->abs());
}

Complex Complex::conjugate()
{
	return Complex(this->Re, this->Im * (-1));
}

Complex Complex::reverse()
{
	return this->conjugate() / (this->Re * this->Re + this->Im * this->Im);
}

Complex operator+(const Complex& z1, const Complex& z2)
{
	return Complex(z1.Re + z2.Re, z1.Im + z2.Im);
}

Complex operator+(const Complex& z, const double q)
{
	return Complex(z.Re + q, z.Im);
}

Complex operator+(const double q, const Complex& z)
{
	return Complex(z.Re + q, z.Im);
}

Complex operator*(const Complex& z1, const Complex& z2)
{
	return Complex(z1.Re * z2.Re - z1.Im * z2.Im, z1.Re * z2.Im + z1.Im * z2.Re);
}

Complex operator*(const Complex& z, const double r)
{
	return Complex(z.Re * r, z.Im * r);
}

Complex operator*(const double r, const Complex& z)
{
	return Complex(z.Re * r, z.Im * r);
}

Complex operator/(const Complex& z1, const Complex& z2)
{
	return Complex(z1 * z2.reverse());
}

Complex operator/(const Complex& z, const double w)
{
	return Complex(z.Re / w, z.Im / w);
}

Complex operator/(const double w, const Complex& z)
{
	return Complex(w * z.revers());
}

std::ostream& operator<<(std::ostream& stream, const Complex c)
{
	if (c.Im == 0)
	{
		stream << c.Re;
	}
	else if (c.Re == 0)
	{
		if (c.Im == 1)
		{
			stream << "i";
		}
		else if (c.Im == 0)
		{
			stream << "0";
		}
		else if (c.Im == -1)
		{
			stream << "-i";
		}
		else
		{
			stream << c.Im << "i";
		}
	}
	else
	{
		if (c.Im == 1)
		{
			stream << c.Re << "+" << "i";
		}
		else if (c.Im == -1)
		{
			stream << c.Re << "-" << "i";
		}
		else if (c.Im < 0)
		{
			stream << c.Re << c.Im << "i";
		}
		else
		{
			stream << c.Re << "+" << c.Im << "i";
		}
	}
	return stream;
	// TODO: insert return statement here
}
