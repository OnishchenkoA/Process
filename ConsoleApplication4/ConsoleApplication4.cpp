#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

#define MODE 1


int main()
{
	setlocale(LC_ALL, "russian");
#ifdef MODE
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	int add;
	int a, b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout <<std::endl;
	std::cout << "Введите число 2: ";
	std::cin >> b;
	std::cout << std::endl;
	add = a + b;
	std::cout << "Результат сложения: " << add << std::endl;
#else 
#error Неизвестный режим. Завершение работы.
#endif
#endif
}

