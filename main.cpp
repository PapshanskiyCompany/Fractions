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

int main(){
	
	Fractions firstFraction;

	firstFraction.setFraction(12, 5);

	cout << "Our fraction is " << firstFraction.getFraction() << "!\n";

	_getch();
	return 0;
}
