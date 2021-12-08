#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class complex
{
	friend class complexarr;
private:
	int whole;
	int imaginary;
public:

	friend ostream& operator << (ostream&, complex&);
	friend istream& operator >> (istream&, complex&);
	complex();
	complex(int, int);
	complex(complex&);
	complex& operator=(const complex& a);
	void randomizer();
	void operator--();
	void operator++();
};