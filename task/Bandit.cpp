#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Bandit.h"
using std::cout;
using std::endl;

// Наполняет все кольца символами ascii с 1 по 6.
Bandit::Bandit()
{
	for (int i = 1; i < 7; i++)
	{
		m_circle_1.Add((char)i);
		m_circle_2.Add((char)i);
		m_circle_3.Add((char)i);
	}
}

// Вывод кольца на экран.
void Bandit::Print()
{
	int min{ 10 };
	int max{ 21 };

	// 1-е кольцо.
	int spin = rand() % (max - min + 1) + min;
	//int spin = 1;
	char circle_1_data{};
	for (int i = 0; i < spin; i++)
	{
		m_circle_1.Remove(circle_1_data);
		system("cls");
		cout << "\n    " << circle_1_data;
		Sleep(50);
	}

	// 2-е кольцо.
	spin = rand() % (max - min + 1) + min;
	char circle_2_data{};
	for (int i = 0; i < spin; i++)
	{
		m_circle_2.Remove(circle_2_data);
		system("cls");
		cout << "\n    " << circle_1_data << ' ' << circle_2_data;
		Sleep(50);
	}

	// 3-е кольцо.
	char circle_3_data{};
	spin = rand() % (max - min + 1) + min;
	for (int i = 0; i < spin; i++)
	{
		m_circle_3.Remove(circle_3_data);
		system("cls");
		cout << "\n    " << circle_1_data << ' ' << circle_2_data << ' ' << circle_3_data << "\n      ";
		Sleep(50);
	}

	// Проверка на победу.
	if (circle_1_data == circle_2_data && circle_1_data == circle_3_data)
	{
		system("cls");
		cout << "$$$JACKPOT$$$" << endl;
		cout << "    " << circle_1_data << ' ' << circle_2_data << ' ' << circle_3_data << endl;
		cout << "$$$JACKPOT$$$" << endl;
	}
}