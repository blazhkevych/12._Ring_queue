/*
############################################ ЗАДАНИЕ ###########################################
				Однорукий бандит
	Написать игру «Однорукий бандит». При нажатии клавиши
«Enter» происходит «вращение» трех барабанов (количество
вращений каждого из них выбирается случайно), на которых
изображены разные значки, и, если выпадает определенная
комбинация, то игрок получает какой-то выигрыш.
################################################################################################
		СТАТУС : Готово.
################################################################################################
*/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Bandit.h"

int main()
{
	srand(time(0));
	Bandit bandit;

	bandit.Print();
	int userPressed{ 0 }; // Нажатая пользователем кнопка.
	do
	{
		userPressed = _getch();

		if (userPressed == 0 || userPressed == 0xE0)
			userPressed = _getch();

		if (userPressed == VK_ESCAPE) // "Escape" - выход из программы.
			break;
		if (userPressed == 32) // "Пробел".
			bandit.Print();
	} while (true);
}