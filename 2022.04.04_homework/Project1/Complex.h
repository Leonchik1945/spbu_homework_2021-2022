#pragma once
#include<iostream>
#include<cmath>

class Complex
{
private:
	double Re;
	double Im;

public:
	Complex(double Re = 0, double Im = 0);
	Complex(const Complex& complex);
	~Complex();

	double getRe();
	void setRe(double Re);
	
	double getIm();
	void setIm(double Im);

	void set(double Re, double Im);
	
	void print();

	void operator= (const Complex& z);

	Complex power(int s);

	double abs();

	double arg();

	Complex conjugate();

	Complex reverse();

	friend Complex operator+ (const Complex& z1, const Complex& z2);
	friend Complex operator+ (const Complex& z, const double q);
	friend Complex operator+ (const double q, const Complex& z);

	friend Complex operator* (const Complex& z1, const Complex& z2);
	friend Complex operator* (const Complex& z, const double r);
	friend Complex operator* (const double r, const Complex& z);

	friend Complex operator/ (const Complex& z1, const Complex& z2);
	friend Complex operator/ (const Complex& z, const double w);
	friend Complex operator/ (const double w, const Complex& z);

	friend std::ostream& operator<< (std::ostream& stream, const Complex c);
};

