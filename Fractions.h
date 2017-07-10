#include <iostream>

using namespace std;

class Fractions {
public:
	void setFraction(int lp, unsigned short rp) {
		leftPart = lp;
		rightPart = rp;
		cout << "Fraction " << leftPart << "." << rightPart << 
			" successfully initialised!\n";
	}

	float getFraction() {
		float ourFraction = leftPart + slitting(rightPart);
		return ourFraction;
	}


private:
	int leftPart;
	unsigned short rightPart;


	float slitting(unsigned short rp) { //There is some Inaccuracy
		float ones = 0;
		while (rp % 10 != 0) {
			ones = rp / 10;
			rp /= 10;
		}

		return ones;
	}
};
