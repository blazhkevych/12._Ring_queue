#pragma once
#include "Queue.h"
#include <iostream>
using std::ostream;

class Bandit
{
	Queue<char> m_circle_1; // 1-е кольцо.
	Queue<char> m_circle_2; // 2-е кольцо.
	Queue<char> m_circle_3; // 3-е кольцо.
public:
	Bandit(); // Наполняет все кольца символами ascii с 1 по 6.

	// Вывод кольца на экран.
	void Print();
};