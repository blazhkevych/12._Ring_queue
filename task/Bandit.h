#pragma once
#include "Queue.h"

class Bandit
{
	Queue<char> m_circle_1; // 1-е кольцо.
	Queue<char> m_circle_2; // 2-е кольцо.
	Queue<char> m_circle_3; // 3-е кольцо.
public:
	Bandit(); // Наполняет все кольца символами ascii с 1 по 6.
	SpinReels(); // Крутит барабаны.
// TODO: сделать задержку прокрутки у барабанов через sleep для визуализации прокуртки барабанов.
// TODO: Какждый барабан прокрутить разное рандомное количество итераций
// TODO: Роль метода прокрутки выполняет метод Remove из класса очередь
// TODO: 

};
// TODO: аСКИ КОДЫ с 1 по 6
// TODO: 
