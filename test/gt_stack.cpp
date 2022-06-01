#include "stack.h"
#include "iostream"
#include <gtest/gtest.h>

class gt_stack :public::testing::Test {
public:
	stack Mystack{5};
	int a[10];
	void SetUp() {};
	void TearDown() {};
	
};
TEST_F(gt_stack, pushInSize) {

	for (int i = 0;i < 5;i++) {
		Mystack.push(i);
		a[i] = i;
	}
	for(int j=0;j<5;j++){
		EXPECT_EQ(a[j], Mystack.getStack(j));
	}
}
TEST_F(gt_stack, pushOutOfSize) {

	for (int i = 0;i < 6;i++) {
		Mystack.push(i);
		a[i] = i;
	}
	for (int j = 0;j < 5;j++) {
		EXPECT_EQ(a[j], Mystack.getStack(j));
	}
	EXPECT_NE(a[5], Mystack.getStack(5));
}
TEST_F(gt_stack, popInSize) {
	for (int i = 0;i < 5;i++) {
		Mystack.push(i);
		a[i] = i;
	}
	for (int j = 0;j < 4;j++) {
		Mystack.pop();
	}
	EXPECT_EQ(a[0], Mystack.getStack(0));
	EXPECT_NE(a[1], Mystack.getStack(1));
}
TEST_F(gt_stack, popOutOfSize) {
	for (int i = 1;i < 6;i++) {
		Mystack.push(i);
		a[i-1] = i;
	}
	for (int j = 0;j < 6;j++) {
		Mystack.pop();
	}
	EXPECT_NE(a[0], Mystack.getStack(0));

}
TEST_F(gt_stack, countSize) {
	for (int i = 0;i < 5;i++) {
		Mystack.push(i);
	}
	EXPECT_EQ (5, Mystack.size());

}
TEST_F(gt_stack, countnedNumber_insize) {
	for (int i = 0;i < 4;i++) {
		Mystack.push(i);
	}
	EXPECT_EQ(4, Mystack.ContainedNumber());

}
TEST_F(gt_stack, countnedNumber_0) {
	for (int i = 0;i < 4;i++) {
		Mystack.push(i);
	}
	for (int j = 0;j < 4;j++) {
		Mystack.pop();
	}
	EXPECT_EQ(0, Mystack.ContainedNumber());

}
TEST_F(gt_stack, countnedNumber_outofsize) {
	for (int i = 0;i < 7;i++) {
		Mystack.push(i);
	}
	EXPECT_NE(7, Mystack.ContainedNumber());
	EXPECT_EQ(5, Mystack.ContainedNumber());
}
TEST_F(gt_stack, front) {
	for (int i = 0;i < 4;i++) {
		Mystack.push(i);
	}
	int* p = Mystack.front();
	EXPECT_EQ(3, *p);
}


int main(int argc, char* argv[]) {
	int key = 0;
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::cout << "press any number to end" << std::endl;
	std::cin >> key;
	return 0;

}