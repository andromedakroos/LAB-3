#include "complexarr.h"
complexarr::complexarr(int size)
{
	this->size = size;
	this->arr = new complex[size];
}

complexarr::complexarr(complexarr& tmp)
{
	this->size = tmp.size;
	this->arr = new complex[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i].imaginary = tmp.arr[i].imaginary;
		this->arr[i].whole = tmp.arr[i].whole;
	}
}

complexarr::~complexarr()
{
	delete[] this->arr;

}
complexarr& complexarr::operator=(const complexarr& a)
{
	this->arr = a.arr;
	this->size = a.size;
	return *this;
}
complex& complexarr::operator[](int index)
{
	return this->arr[index];
}

complexarr complexarr::operator+=(complexarr a)
{
	complexarr tmp(size + a.size);
	int i = 0;
	while (i < size)
	{
		tmp.arr[i].whole = arr[i].whole;
		tmp.arr[i].imaginary = arr[i].imaginary;
		i++;
	}
	while (i < size + a.size)
	{
		tmp.arr[i].imaginary = a.arr[i - size].imaginary;
		tmp.arr[i].whole = a.arr[i - size].whole;
		i++;
	}
	delete[] arr;
	arr = new complex[tmp.size];
	for (int i = 0; i < tmp.size; i++)
	{
		arr[i].imaginary = tmp[i].imaginary;
		arr[i].whole = tmp[i].whole;
	}
	size = tmp.size;
	return 1;
}

void complexarr::addElement(complex& a)
{
	complexarr tmp(size + 1);
	int i = 0;
	for (i=0;i < size; i++)
	{
		tmp.arr[i].whole = arr[i].whole;
		tmp.arr[i].imaginary = arr[i].imaginary;
		
	}
	tmp.arr[i].imaginary = a.imaginary;
	tmp.arr[i].whole = a.whole;
	delete[] arr;
	arr = new complex[tmp.size];
	for (int i = 0; i < tmp.size; i++)
	{
		arr[i].imaginary = tmp[i].imaginary;
		arr[i].whole = tmp[i].whole;
	}
	size = tmp.size;
	return;
}

int complexarr::length()
{
	return size;
}

void complexarr::sortUp()
{
	complex tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j].whole < arr[j + 1].whole)
			{
				 tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}

void complexarr::sortDown()
{
	complex tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j].whole > arr[j + 1].whole)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}


ostream& operator<<(ostream& os, const complexarr array)
{
	for (int i = 0; i < array.size; i++)
		cout << array.arr[i] << endl;
	return os;
}

void complexarr::delElement(int a)
{
	if (a<0 || a>this->size - 1)
	{
		std::cout << "¬ведено неверное значение, повторите ввод:" << std::endl;
		return;
	}
	complexarr tmp(this->size - 1);
	for (int i = a; i < this->size - 1; i++)
	{
		this->arr[i] = this->arr[i + 1];
	}
	for (int i = 0; i < tmp.size; i++)
	{
		tmp.arr[i].imaginary = this->arr[i].imaginary;
		tmp.arr[i].whole = this->arr[i].whole;
	}
	delete[] this->arr;
	this->size = tmp.size;
	this->arr = new complex[this->size];
	for (int i = 0; i < tmp.size; i++)
	{
		this->arr[i].imaginary = tmp.arr[i].imaginary;
		this->arr[i].whole = tmp.arr[i].whole;
	}
}
