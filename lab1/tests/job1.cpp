#include <iostream>
#include "stack.h"
#include "stack.cpp"

int main() {
	int mode = 0;
	int pushData = 0;
	stack MyStack(5);
	for (int j = 0;j < 100;j++) {
		
		std::cout << "choose function:" << std::endl;
		std::cout << "1.push 2.front 3.pop 4.size 5.ContainedNumber 10.quit" << std::endl;
		std::cin >> mode;
		if (mode == 1) {
			std::cout << "pleas push data:" << std::endl;
			std::cin >> pushData;
			MyStack.push(pushData);
		}
		if (mode == 2) {
			std::cout << "the address of top data:" << MyStack.front() << std::endl;

		}
		if (mode == 3) {
			std::cout << "delete data :" << MyStack.getStack(MyStack.ContainedNumber()) << std::endl;
			MyStack.pop();
		
		}
		if (mode == 4) {
			std::cout << "the size of stack:" <<MyStack.size()<< std::endl;
		}
		if (mode == 5) {
			std::cout << "number of elements:" << MyStack.ContainedNumber() << std::endl;
		}
		if (mode == 10) {
			break;
		}
		std::cout << "----------------" << std::endl;
		for (int m = MyStack.ContainedNumber();m > 0;m--) {
			std::cout << "data of stack:" << MyStack.getStack(m) << std::endl;
		}
		std::cout << "----------------" << std::endl;

	}
	
	return 0;
}