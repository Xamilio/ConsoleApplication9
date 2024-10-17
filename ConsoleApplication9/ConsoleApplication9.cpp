#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	//int x = rand() % 500;
	//int y;
	//do
	//{
	//	cout << "Enter number: ";
	//	cin >> y;
	//	if (y > x)
	//	{
	//		cout << "Число меньше " << endl;
	//	}
	//	else if (y < x)
	//	{
	//		cout << "Число больше " << endl;
	//	}
	//	else if (y == x)
	//	{
	//		cout << "Вы угадали число" << endl;
	//	}
	//} 
	//while (x != y);

	//const float Dol = 41.33;
	//const float Euro = 44.90;
	//int x = 1;
	//float money = 0;
	//float dol = 0;
	//float euro = 0;
	//do
	//{
	//	cout << "(1)Перевести с гривен в доллары курс: 1$ = " << Dol << endl;
	//	cout << "(2)Перевести с гривен в Евро курс: 1€ = " << Euro << endl;
	//	cout << "(3)Проверить балланс: " << endl;
	//	cout << "(0)Закончить операции" << endl;
	//	cout << "Выберите действие: ";
	//	cin >> x;
	//	switch (x)
	//	{
	//		case(1):
	//		{
	//			cout << "Введите количество долларов: ";
	//			cin >> dol;
	//			cout << "Вы получили: " << dol * Dol << " грн\n" << endl;
	//			money = money + dol * Dol;
	//			break;
	//		}
	//		case(2):
	//		{
	//			cout << "Введите количество евро: ";
	//			cin >> euro;
	//			cout << "Вы получили: " << euro * Euro << " грн\n" << endl;
	//			money = money + euro * Euro;
	//			break;
	//		}
	//		case(3):
	//		{	
	//			cout << "Ваш баланс: " << money << " грн\n" << endl;
	//			break;
	//		}
	//	}
	//} while (x != 0);


	//ДЗ
	int x;
	cout << "Введите число которое вы хотите пермножить: ";
	cin >> x;
	for (int i = 0; i <= 10; i++)
	{
		cout << x << " * " << i << " = " << x * i << endl;
	}
}
