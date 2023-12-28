﻿#include <iostream>
using namespace std;
/**
@file      Sourse1.cpp
@brief     Исходный файл программы
@copyright ВоГУ
@author    Белясов Г.Ю.
@date      28 - 12 - 2023
@version   1.0.0
*/

/// Функция для ввода целого числа A пользователем
/** Просит пользователя ввести число A
\return  число A
*/
int VvestiA() {
	int nomer1;
	cout << "Enter the natural number A: ";
	cin >> nomer1;
	return nomer1;
}

/// Функция для ввода целого числа B пользователем
/** Просит пользователя ввести число  B
\return  число  B
*/
int VvestiB() {
	int nomer2;
	cout << "Enter the natural number B: ";
	cin >> nomer2;
	return nomer2;
}

/// Функция для нахождения суммы 2 целых чисел A и B
/** Находится и выводится сумма 2 целых чисел A и B
\param x число А
\param y число B
\return A+B
*/
int sum(int x, int y) {
	return x + y;
}
/// Функция для нахождения разность 2 целых чисел A и B
/** Находится и выводится разность 2 целых чисел A и B
\param x число А
\param y число B
\return  A-B
*/
int dif(int x, int y) {
	return x - y;
}
/// Основная функция
/** Выводит условие, обращается к функциям и выводит результат
\param x номер используемой функции
\param No1 число A
\param No2 число B
*/
int main()
{
	cout << "Enter 1 to enter the first number" << endl << "Enter 2 to enter the second number" << endl << "Enter 3 if you want to perform an addition operation  A and B" << endl << "Enter 4 if you want to perform a subtraction operation A and B" << endl << "Enter 0 to exit the program" << endl;
	int x = 0;
	int No1 = 0;
	int No2 = 0;
	do {
		cin >> x;
		if (x == 1) {
			No1 = VvestiA();
		}
		if (x == 2) {
			No2 = VvestiB();
		}
		switch (x)
		{
		case 1:
			continue;
		case 2:
			continue;
		case 3:
			cout << "the sum of A and B: " << sum(No1, No2) << endl;
			continue;
		case 4:
			cout << "the difference between A and B " << dif(No1, No2) << endl;
			continue;
		case 0:
			return 0;
			break;
		default:
			cout << "Wrong choice" << endl;
			return 0;
		}
	} while (x < 5 or x>0);
	return 0;
}