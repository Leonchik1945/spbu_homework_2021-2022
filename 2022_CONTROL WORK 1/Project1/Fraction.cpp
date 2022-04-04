#include "Fraction.h"

long long Nod(long long a, long long b)
{
	if (b == 0)
	{
		return (a);
	}
	else
	{
		return (Nod(b, a % b));
	}
}

Fraction::Fraction(long long numerator, long long denominator) : numerator(numerator), denominator(denominator) {}

Fraction::Fraction(const Fraction& f) : numerator(f.numerator), denominator(f.denominator) {}

Fraction::~Fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}

int Fraction::getnumerator()
{
	return this->numerator;
}

void Fraction::setnumerator(int numerator)
{
	this->numerator = numerator;
}

int Fraction::getdenominator()
{
	return this->denominator;
}

void Fraction::setdenominatorr(int denominator)
{
	this->denominator = denominator;
}

void Fraction::set(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::operator=(const Fraction& f)
{
	this->numerator = f.numerator;
	this->denominator = f.denominator;
}

long long Fraction::Nok()
{
	return ((this->numerator * this->denominator) / Nod(this->numerator, this->denominator));
}


Fraction Fraction::reverse()
{
	return Fraction((this->numerator - (this->numerator - 1)) * this->denominator, (this->denominator - (this->denominator - 1)) * this->numerator);
}

Fraction Fraction::abs(Fraction& f)
{
	if (f.numerator == 0)
	{
		return 0;
	}
	else if (f.numerator > 0)
	{
		if (f.denominator < 0)
		{
			return Fraction(f.numerator, f.denominator * (-1));
		}
		else if (f.denominator > 0)
		{
			return Fraction(f.numerator, f.denominator);
		}
		else if (f.denominator == 0)
		{
			return false;
		}
	}
	else if (f.numerator < 0)
	{
		if (f.denominator < 0)
		{
			return Fraction(f.numerator * (-1), f.denominator * (-1));
		}
		else if (f.denominator > 0)
		{
			return Fraction(f.numerator * (-1), f.denominator);
		}
		else if (f.denominator == 0)
		{
			return false;
		}
	}
}

bool Fraction::operator==(Fraction& f)
{
	if ((this->Nok() / Nod(this->numerator, this->denominator)) == (f.Nok() / Nod(f.numerator, f.denominator)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator<(Fraction& f)
{
	if ((this->numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / this->denominator) < (f.numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / f.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator<=(Fraction& f)
{
	if ((this->numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / this->denominator) <= (f.numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / f.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator>(Fraction& f)
{
	if ((this->numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / this->denominator) > (f.numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / f.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator>=(Fraction& f)
{
	if ((this->numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / this->denominator) >= (f.numerator * ((this->denominator * f.denominator) / Nod(this->denominator, f.denominator)) / f.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

Fraction operator+(const double t, const Fraction& f)
{
	return Fraction(f.numerator + (t * f.denominator), f.denominator);
}

Fraction operator+(const Fraction& f, const double t)
{
	return Fraction(f.numerator + (t * f.denominator), f.denominator);
}

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
	return Fraction((f1.numerator * f2.denominator) + (f2.numerator * f1.denominator), f1.denominator * f2.denominator);
}

Fraction operator-(const double t, const Fraction& f)
{
	return Fraction((t * f.denominator) - f.numerator, f.denominator);
}

Fraction operator-(const Fraction& f, const double t)
{
	return Fraction((t * f.denominator) - f.numerator, f.denominator);
}

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
	return Fraction((f1.numerator * f2.denominator) - (f2.numerator * f1.denominator), f1.denominator * f2.denominator);
}

Fraction operator*(const double t, const Fraction& f)
{
	return Fraction(f.numerator * t, f.denominator);
}

Fraction operator*(const Fraction& f, const double t)
{
	return Fraction(f.numerator * t, f.denominator);
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
}

Fraction operator/(const double t, const Fraction& f)
{
	return Fraction(f.denominator * t, f.numerator);
}

Fraction operator/(const Fraction& f, const double t)
{
	return Fraction(f.denominator * t, f.numerator);
}

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.numerator * f2.denominator, f1.denominator * f2.numerator);
}

std::ostream& operator<<(std::ostream& stream, const Fraction& f)
{
	if (f.numerator == 0)
	{
		stream << "0";
	}
	else
	{
		if (f.numerator > 0)
		{
			if (f.denominator == 1)
			{
				stream << f.numerator;
			}
			else if (f.denominator < 0)
			{
				stream << "-" << f.numerator << "/" << f.denominator * (-1);
			}
			else if (f.denominator > 0)
			{
				stream << f.numerator << "/" << f.denominator;
			}
			else
			{
				stream << "The denominator is zero!"
			}
		}
		else
		{
			if (f.denominator == 1)
			{
				stream << f.numerator;
			}
			else if (f.denominator < 0)
			{
				stream << f.numerator * (-1) << "/" << f.denominator * (-1);
			}
			else if (f.denominator > 0)
			{
				stream << f.numerator << "/" << f.denominator;
			}
			else
			{
				stream << "The denominator is zero!"
			}
		}
	}
	return stream;
	// TODO: insert return statement here
}
