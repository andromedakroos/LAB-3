#include "Header.h"

int check(int n)
{
	bool success = true;
	while (success)
	{
		system("cls");
		if (cin.peek() != '\n' || cin.fail())
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "������, ��������� ����!" << endl;
			cin >> n;
		}
		else
			success = false;
	}
	return n;
}

void adding(int length, complexarr& arr)
{
	int select,i;
	complex rand;
	cout << "������� 1 ��� ������� ����������, ������� 2 ��� ���������� ��������: ";
	cin >> select;
	if (select == 1)
	{
		for (i = 0; i < length; i++)
		{
			cout << "������� " << i + 1 << " �������: " << endl;
			cin >> arr[i];
		}
	}
	if (select == 2)
	{
		for (i = 0; i < length; i++)
		{
			rand.randomizer();
			arr[i] = rand;
		}
	}
}
void txt()
{
	cout << "�������� ��������:" << endl
		<< "1 - ����������� ���������� ��������" << endl
		<< "2 - ������ � 1 ��������" << endl
		<< "3 - ������ �� 2 ��������" << endl
		<< "4-���������� 1 �� 2" << endl
		<< "5-���������� 2 � 1" << endl
		<< "6-����� �� ���������" << endl;
}
void text()
{
	cout << "�������� �������� � 1 �������:" << endl
		<< "1 - ���������� ��������" << endl
		<< "2 - �������� ��������" << endl
		<< "3 - ���������� �� ��������" << endl
		<< "4-���������� �� �����������" << endl
		<< "0-��������� � ������� ����" << endl;
}
void tekst()
{
	cout << "�������� �������� �� 2 �������:" << endl
		<< "1 - ���������� ��������" << endl
		<< "2 - �������� ��������" << endl
		<< "3-���������� �� ��������" << endl
		<< "4-���������� �� �����������" << endl
		<< "0-��������� � ������� ����" << endl;
}