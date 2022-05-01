#pragma once
class stack {
private:
	int Size = 0;
	int* data;
	int* top;
	int i = 0;
public:
	stack(int size);
	stack();
	~stack();
	void push(int data);
	int* front();
	void pop();
	int ContainedNumber();
	int size();
	int getStack(int number);
};

