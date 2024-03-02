#include "Math.h"
Math::Math() {
}
double Math::quatric(int a, int b, int c, bool d) {

	double d_pos = (-b + std::sqrt(Math::powerfnc(b, 2) - 4 * a * c)) / (a * 2);
	double d_neg = (-b - std::sqrt(Math::powerfnc(b, 2) - 4 * a * c)) / (a * 2);
	if (d) {
		return d_pos;
	}
	
	return d_neg;

	
}

int Math::powerfnc(int a, int b) {
	int c = a;

	for (int i = 1; i < b; i++) {
		c = c * a;
	}

	return c;
}