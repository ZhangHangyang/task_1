#include "stack.h"
#include "iostream"
const int nmax = 100;
stack::stack(int size) {
	this->Size = size;
	data = new int[Size];
}
stack::stack() {
	data = new int[nmax];
};
stack::~stack() {
	delete[] data;
}
void stack::push(int data) {
	if (i > Size - 1) {
		std::cout << "out of size of the stack" << std::endl;
	}
	else {
		this->data[i] = data;
		this->top = &this->data[i];
		i++;
	}
}

int* stack::front() {
	return top;
}

void stack::pop() {
	if (i >= 1) {
		*top = NULL;
		i--;
		this->top = &this->data[i];
	}
	else {
		std::cout << "no data" << std::endl;
	}

}
int stack::ContainedNumber() {
	return i;
}
int stack::size() {
	return Size;
}

int stack::getStack(int number) {
	if (number > this->i-1) {
		std::cout << "There is no  " << number+1 << "th number in the stack" << std::endl;
		return 0;
	}
	return data[number];
}