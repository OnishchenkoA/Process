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
	std::cout << "������� � ������ ����������" << std::endl;
#elif MODE == 1
	int add;
	int a, b;
	std::cout << "������� � ������ ������" << std::endl;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout <<std::endl;
	std::cout << "������� ����� 2: ";
	std::cin >> b;
	std::cout << std::endl;
	add = a + b;
	std::cout << "��������� ��������: " << add << std::endl;
#else 
#error ����������� �����. ���������� ������.
#endif
#endif
}

