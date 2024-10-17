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
	//		cout << "×èñëî ìåíüøå " << endl;
	//	}
	//	else if (y < x)
	//	{
	//		cout << "×èñëî áîëüøå " << endl;
	//	}
	//	else if (y == x)
	//	{
	//		cout << "Âû óãàäàëè ÷èñëî" << endl;
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
	//	cout << "(1)Ïåðåâåñòè ñ ãðèâåí â äîëëàðû êóðñ: 1$ = " << Dol << endl;
	//	cout << "(2)Ïåðåâåñòè ñ ãðèâåí â Åâðî êóðñ: 1ˆ = " << Euro << endl;
	//	cout << "(3)Ïðîâåðèòü áàëëàíñ: " << endl;
	//	cout << "(0)Çàêîí÷èòü îïåðàöèè" << endl;
	//	cout << "Âûáåðèòå äåéñòâèå: ";
	//	cin >> x;
	//	switch (x)
	//	{
	//		case(1):
	//		{
	//			cout << "Ââåäèòå êîëè÷åñòâî äîëëàðîâ: ";
	//			cin >> dol;
	//			cout << "Âû ïîëó÷èëè: " << dol * Dol << " ãðí\n" << endl;
	//			money = money + dol * Dol;
	//			break;
	//		}
	//		case(2):
	//		{
	//			cout << "Ââåäèòå êîëè÷åñòâî åâðî: ";
	//			cin >> euro;
	//			cout << "Âû ïîëó÷èëè: " << euro * Euro << " ãðí\n" << endl;
	//			money = money + euro * Euro;
	//			break;
	//		}
	//		case(3):
	//		{	
	//			cout << "Âàø áàëàíñ: " << money << " ãðí\n" << endl;
	//			break;
	//		}
	//	}
	//} while (x != 0);


	//ÄÇ
	int x;
	cout << "Введите число которое вы хотите пермножить: ";
	cin >> x;
	for (int i = 0; i <= 10; i++)
	{
		cout << x << " * " << i << " = " << x * i << endl;
	}
}
