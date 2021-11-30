// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Выберите время года." << endl;
	cout << "1 - Зима \n2 - Весна \n3 - Лето \n4 - Осень\nВыберите число - ";
	int season = 0;
	cin >> season;
	if (season == 1)
	{
		system("cls");
		cout << "Вы выбрали Зиму";
	}
	else if (season == 2)
	{
		system("cls");
		cout << "Вы выбрали Весну";
	}
	else if (season == 3)
	{
		system("cls");
		cout << "Вы выбрали Лето";
	}
	else if (season == 4)
	{
		system("cls");
		cout << "Вы выбрали Осень";
	}
	else
	{
		system("cls");
		cout << "Ошибка";
	}
	int _; cin >> _;
	return 0;
}

