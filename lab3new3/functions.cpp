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
			cout << "Ошибка, повторите ввод!" << endl;
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
	cout << "Введите 1 для ручного заполнения, введите 2 для заполнения рандомом: ";
	cin >> select;
	if (select == 1)
	{
		for (i = 0; i < length; i++)
		{
			cout << "Введите " << i + 1 << " элемент: " << endl;
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
	cout << "Выберете действие:" << endl
		<< "1 - просмотреть содержимое массивов" << endl
		<< "2 - работа с 1 массивом" << endl
		<< "3 - работа со 2 массивом" << endl
		<< "4-Объеденить 1 со 2" << endl
		<< "5-Объеденить 2 с 1" << endl
		<< "6-Выход из программы" << endl;
}
void text()
{
	cout << "Выберете действие в 1 массиве:" << endl
		<< "1 - добавление элемента" << endl
		<< "2 - удаление элемента" << endl
		<< "3 - сортировка по убыванию" << endl
		<< "4-сортировка по возрастанию" << endl
		<< "0-вернуться в главное меню" << endl;
}
void tekst()
{
	cout << "Выберете действие во 2 массиве:" << endl
		<< "1 - добавление элемента" << endl
		<< "2 - удаление элемента" << endl
		<< "3-сортировка по убыванию" << endl
		<< "4-сортировка по возрастанию" << endl
		<< "0-вернуться в главное меню" << endl;
}