#include "SIN.h"
#include "iostream"
#include <gtest/gtest.h>

bool eqfunction4(double sin, int number) {
	double sinNumberlow1 = 0;
	double sinNumberhigh2 = 0;
	if (number == 1) {
		sinNumberlow1 = 0.8414;
		sinNumberhigh2 = 0.8415;
		std::cout << "sin(" << number << ")=" << sinNumberlow1 << "-" << sinNumberhigh2 << std::endl;
		if (sin >= sinNumberlow1 && sin <= sinNumberhigh2) {
			return true;
		}
		return false;
	}
	else if (number == 2) {
		sinNumberlow1 = 0.9093;
		sinNumberhigh2 = 0.9094;
		std::cout << "sin(" << number << ")=" << sinNumberlow1 << "-" << sinNumberhigh2 << std::endl;
		if (sin >= sinNumberlow1 && sin <= sinNumberhigh2) {
			return true;
		}
		return false;
	}
	else if (number == 3) {
		sinNumberlow1 = 0.1411;
		sinNumberhigh2 = 0.1412;
		std::cout << "sin(" << number << ")=" << sinNumberlow1 << "-" << sinNumberhigh2 << std::endl;
		if (sin >= sinNumberlow1 && sin <= sinNumberhigh2) {
			return true;
		}
		return false;
	}
	else if (number == 4) {
		sinNumberlow1 = -0.7568;
		sinNumberhigh2 = -0.7567;
		std::cout << "sin(" << number << ")=" << sinNumberlow1 << "-" << sinNumberhigh2 << std::endl;
		if (sin >= sinNumberlow1 && sin <= sinNumberhigh2) {
			return true;
		}
		return false;
	}
	else if (number == 5) {
		sinNumberlow1 = -0.9590;
		sinNumberhigh2 = -0.9589;
		std::cout << "range of sin(" <<number <<")=" <<sinNumberlow1<<"-"<<sinNumberhigh2 << std::endl;
		if (sin >= sinNumberlow1 && sin <= sinNumberhigh2) {
			return true;
		}
		return false;
	}
}

TEST(test, sin1_5) {
	int x = 0;
	std::cout << "choose bumber 1-5" << std::endl;
	std::cin >> x;
	SIN mysin;
	EXPECT_TRUE(
		eqfunction4(mysin.sin(x),x)
	);

}
int main(int argc, char* argv[]) {
	int key = 0;
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();	
	std::cout << "press any number to end" << std::endl;
	std::cin >> key;
	return 0;

}