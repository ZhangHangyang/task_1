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
		throw std::length_error("Stack is full!");
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
		throw std::out_of_range("Stack is empty!");
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
		throw std::out_of_range("there is no number");
		return 0;
	}
	return data[number];
}