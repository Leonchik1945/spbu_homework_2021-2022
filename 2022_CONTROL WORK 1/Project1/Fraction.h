#pragma once
#include<iostream>
#include<cmath>

class Fraction
{
private:
	long long numerator;
	long long denominator;

public:
	Fraction(long long numerator = 0, long long denominator = 0);
	Fraction(const Fraction& f);
	~Fraction();

	int getnumerator();
	void setnumerator(int numerator);

	int getdenominator();
	void setdenominatorr(int denominator);

	void set(int numerator, int denominator);

	void operator= (const Fraction& f);

	long long Nok();

	Fraction reverse();

	Fraction abs(Fraction& f);

	bool operator== (Fraction& f);
	bool operator< (Fraction& f);
	bool operator<= (Fraction& f);
	bool operator> (Fraction& f);
	bool operator>= (Fraction& f);

	friend Fraction operator+(const double t, const Fraction& f);
	friend Fraction operator+(const Fraction& f, const double t);
	friend Fraction operator+(const Fraction& f1, const Fraction& f2);

	friend Fraction operator-(const double t, const Fraction& f);
	friend Fraction operator-(const Fraction& f, const double t);
	friend Fraction operator-(const Fraction& f1, const Fraction& f2);

	friend Fraction operator*(const double t, const Fraction& f);
	friend Fraction operator*(const Fraction& f, const double t);
	friend Fraction operator*(const Fraction& f1, const Fraction& f2);

	friend Fraction operator/(const double t, const Fraction& f);
	friend Fraction operator/(const Fraction& f, const double t);
	friend Fraction operator/(const Fraction& f1, const Fraction& f2);

	friend std::ostream& operator<< (std::ostream& stream, const Fraction& f);
};

