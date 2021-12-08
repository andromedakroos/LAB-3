#include"Header.h"
#include"complexarr.h"
#include<conio.h>
int check(int);

int main()
{
	setlocale(LC_ALL, "Russian");
	int length1, length2, i, select;
	complex tmp,rand;
	int index;
	cout << "Введите размер первого массива:";
	cin >> length1;
	length1 = check(length1);
	complexarr arr1(length1);
	adding(length1, arr1);
	system("CLS");
	cout << "Введите размер второго массива:";
	cin >> length2;
	length2 = check(length2);
	complexarr arr2(length2);
	adding(length2, arr2);
	system("CLS");
	do {
		txt();
		cin >> select;
		switch (select) 
		{
		case 1:
			system("CLS");
			cout << "Первый массив:" << endl;
			cout << arr1;
			cout << "Второй массив:" << endl;
			cout << arr2;
			break;
		case 2:
			do 
			{
				system("CLS");
				text();
				cin >> select;
				switch (select)
				{
				  case 1:
					  cin >> tmp;
					  arr1.addElement(tmp);
					  break;
				  case 2:
					  cout << "Первый массив:" << endl;
					  cout << arr1;
					  cout << "Введите номер элемента, который хотите удалить" << endl;
					  cin >> index;
					  if(index > arr1.length() || index<0)
					  {
						  system("CLS");
						  cout << "Вы ввели значение больше кол-ва элементов массива, повторите ввод" << endl;
						  cin >> index;
					  }
					  index--;
					  arr1.delElement(index);
					  break;
				  case 3:
					  arr1.sortUp();
					  break;
				  case 4:
					  arr1.sortDown();
					  break;
				}
			} while (select!=0);
			break;
			
		case 3:
			do
			{
				system("CLS");
				tekst();
				cin >> select;
				switch (select)
				{
				case 1:
					cin >> tmp;
					arr2.addElement(tmp);
					break;
				case 2:
					cout << "Второй массив массив:" << endl;
					cout << arr2;
					cout << "Введите номер элемента, который хотите удалить" << endl;
					cin >> index;
					if (index > arr2.length() || index < 0)
					{
						system("CLS");
						cout << "Вы ввели значение больше кол-ва элементов массива, повторите ввод" << endl;
						cin >> index;
					}
					index--;
					arr1.delElement(index);
					break;
				case 3:
					arr2.sortUp();
					break;
				case 4:
					arr2.sortDown();
					break;
				}
			} while (select!=0);
			break;

		case 4:

			arr1 += arr2;
			break;


		case 5:
			arr2 += arr2;
			break;
		}
	} while (select != 6);
};
