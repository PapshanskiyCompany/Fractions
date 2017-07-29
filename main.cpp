/*------------------------------------------------
1) Класс Дробное число со знаком (Fractions). Число должно быть представлено двумя полями: 
целая часть - длинное целое со знаком, дробная часть - беззнаковое короткое целое. Реализовать 
арифметические операции сложения, вычитания, умножения и операции сравнения. В функции main проверить эти методы.
------------------------------------------------*/
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Fractions.h"

using namespace std;

int main() {
	
	cout << "Fraction numbers v 1.0\nDeveloped by Apashanskiy\n\n";

	cout << "************************************************************************\n"
		 << "* This programm can fold only positive fractional numbers.             *\n" <<
			"* If the fractional  number is negative the programm will stop working!*\n" <<
			"************************************************************************\n";

	
	
	Fractions f1, f2, f3, f4;

	f1.setFraction(642, 23);
	f2.setFraction(172, 63);
	f3.setFraction(0, 0);
	
	
	f3 = f4.sum(f1, f2, f3);

	cout << "Sum of " << f1.getFraction() << " and " 
		<< f2.getFraction() << " is " << f3.getFraction() << endl;
	
	
	_getch();
	return 0;
}
