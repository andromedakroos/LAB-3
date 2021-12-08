#include "complex.h"

ostream& operator<< (ostream& out, complex& a)
{
	out << a.whole;
	out <<"+" << a.imaginary << "i";
	return out;
}

istream& operator>> (istream& in, complex& a)
{
	
	cout << "¬ведите целую часть" << endl;
	in >> a.whole;
	cout << "¬ведите мнимую часть" << endl;
	in >> a.imaginary;
	return in;
}

complex::complex()
{
	whole = 0;
	imaginary = 0;
}


complex::complex(int z, int x)
{
	whole = z;
	imaginary = x;
}

complex::complex(complex&)
{
	this->imaginary = imaginary;
	this->whole = whole;
}

complex& complex::operator=(const complex& a)
{
	this->whole = a.whole;
	this->imaginary = a.imaginary;
	return *this;
}

void complex::randomizer()
{
	whole = rand() % 60 - 1;
	imaginary = rand() % 60 - 1;

}

void complex::operator--()
{
	whole--;
}
void complex::operator++()
{
	whole++;
}


