﻿#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Нейтральные указатели.
	
	// int* pn1 = 0; // способ первый (неактуальный, т.к. из языка С и обладает одной проблемой.)
	// int* pn2 = NULL; // способ второй (решает часть проблем, но всё равно уже не актуален.)
	int* pn3 = nullptr; // способ третий (актуальный.)

	if (pn3 != nullptr) 
		std::cout << "pn1 = " << pn3 << std::endl;
	else
		std::cout << "Ошибка. Указатель не инициализирован.\n";
	

	// Типы констант указателей.

	n = 7; m = 15;
	// Указатель на константу. Может быть объявлен без инициализации и может быть перенаправлен на другую область памяти, но с его помощью нельзя менять значение памяти, на которую 
	// он направлен.
	const int* pointer1;
	pointer1 = &n;
	pointer1 = &m;
	// *pointer1 = 10; // ОШИБКА.
	std::cout << *pointer1 << std::endl;

	// Константный указатель или указатель-константа. Не может быть объявлен без инициализации и не может быть перенаправлен на другую область памяти, но с его помощью можно менять
	// значение памяти, на которую он направлен.
	int* const pointer2 = &n;
	// pointer2 = &m; // ОШИБКА.
	*pointer2 = 10;
	std::cout << n << std::endl;

	// Константный указатель на константу. Не может быть объявлен без инициализации и не может быть перенаправлен на другую область памяти. С его помощью нельзя менять значение памяти, на 
	// которую он направлен.
	const int* const pointer3 = &n;
	// pointer3 = &m; // ОШИБКА.
	// *pointer3 = 42; // ОШИБКА.
	std::cout << *pointer3 << std::endl;

	return 0;
}