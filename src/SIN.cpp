#include "SIN.h"
#include "iostream"

double SIN::sin(double nrator) {
	this->numerator = nrator;

	for (int i = 0;numerator / denominator >= 1e-4;i++) {

		std::cout << "numerator/denominator" << numerator / denominator << std::endl;
		sum = sum + s * numerator / denominator;
		std::cout << "sum" << sum << std::endl;
		numerator = numerator * (nrator * nrator);
		denominator = denominator * 2 * (i + 1) * (2 * (i + 1) + 1);
		s = s * (-1);
	}
	return sum;
}