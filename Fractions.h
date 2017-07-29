#include <iostream>
#include <stdlib.h>

using namespace std;

class Fractions {
public:
	void setFraction(int lp, unsigned short rp) {
		if (lp < 0) {
			cout << "Fraction is negative number!\n";
			_getch();
			exit(1);
		}
		else {
			leftPart = lp;
			rightPart = rp;
			cout << "Fraction " << leftPart << "." << rightPart <<
				" successfully initialised!\n";
		}
	}

	float getFraction() {
		float ourFraction = leftPart + slitting(rightPart);
		return ourFraction;
	}

	Fractions sum(Fractions a, Fractions b, Fractions c) {
		int lpSum, rpSum, mainScaler, remainder = 0;
		//////////////////////////////////////////////// уравниваем дробную часть
		int scaleData[2] = { scaler(a.rightPart), scaler(b.rightPart) };
		if (scaleData[0] >= scaleData[1]) {
			mainScaler = scaleData[0];
			for (int i = 0; i < (scaleData[0] - scaleData[1]); i++) {
				b.rightPart *= 10;
			}
		}
		else {
			mainScaler = scaleData[1];
			for (int i = 0; i < (scaleData[1] - scaleData[0]); i++) {
				a.rightPart *= 10;
			}
		}
		////////////////////////////////////////////////	складываем
		rpSum = a.rightPart + b.rightPart;
		//////////////////////////////////////////////// переносим остаток
		if (scaler(rpSum) > mainScaler) {
			int mainScalerMoon = mainScaler, spliterValue = 1;
			while (mainScalerMoon > 0) {
				spliterValue *= 10;
				mainScalerMoon--;
			}
			c.rightPart = rpSum % spliterValue;
			c.leftPart = rpSum / spliterValue;
		}
		else {
			c.rightPart = rpSum;
			c.leftPart = 0;
		}
		lpSum = a.leftPart + b.leftPart;
		c.leftPart += lpSum;

		return c;
	}

//private:
	int leftPart;
	unsigned short rightPart;


	float slitting(unsigned short rp) { //There is some Inaccuracy
		float ones = rp;
		for (int i = 0; i < scaler(rp); i++) {
			ones /= 10;
		}

		return ones;
	}

	int scaler(unsigned short rp) {
		int scale = 0;
		while (rp != 0) {
			rp /= 10;
			scale++;
		}
		return scale;
	}

};
