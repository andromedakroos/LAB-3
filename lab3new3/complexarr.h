#pragma once
#include "complex.h"

class complexarr
{
	complex* arr;
	int size;
public:
	complexarr(int size);
	complexarr(complexarr& tmp);
	~complexarr();
	friend ostream& operator<< (ostream& os, const complexarr arr);
	complexarr& operator=(const complexarr& arr);
	complex& operator[](int index);
	complexarr operator+=(complexarr a);
	void delElement(int index);
	void addElement(complex& a);
	int length();
	void sortUp();
	void sortDown();
};
