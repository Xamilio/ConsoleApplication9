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
	//		cout << "����� ������ " << endl;
	//	}
	//	else if (y < x)
	//	{
	//		cout << "����� ������ " << endl;
	//	}
	//	else if (y == x)
	//	{
	//		cout << "�� ������� �����" << endl;
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
	//	cout << "(1)��������� � ������ � ������� ����: 1$ = " << Dol << endl;
	//	cout << "(2)��������� � ������ � ���� ����: 1� = " << Euro << endl;
	//	cout << "(3)��������� �������: " << endl;
	//	cout << "(0)��������� ��������" << endl;
	//	cout << "�������� ��������: ";
	//	cin >> x;
	//	switch (x)
	//	{
	//		case(1):
	//		{
	//			cout << "������� ���������� ��������: ";
	//			cin >> dol;
	//			cout << "�� ��������: " << dol * Dol << " ���\n" << endl;
	//			money = money + dol * Dol;
	//			break;
	//		}
	//		case(2):
	//		{
	//			cout << "������� ���������� ����: ";
	//			cin >> euro;
	//			cout << "�� ��������: " << euro * Euro << " ���\n" << endl;
	//			money = money + euro * Euro;
	//			break;
	//		}
	//		case(3):
	//		{	
	//			cout << "��� ������: " << money << " ���\n" << endl;
	//			break;
	//		}
	//	}
	//} while (x != 0);


	//��
	int x;
	cout << "������� ����� ������� �� ������ ����������: ";
	cin >> x;
	for (int i = 0; i <= 10; i++)
	{
		cout << x << " * " << i << " = " << x * i << endl;
	}
}
