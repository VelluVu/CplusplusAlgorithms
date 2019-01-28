#include "String_Pino.h"



void String_Pino::Push(string data)
{
	if (!IsFull()) {
		top++;
		stack[top] = data;
	}
	else {
		printf("Could not insert data, Stack is full. \n");
	}
}

bool String_Pino::IsFull()
{
	if (top == MAX - 1) {
		return true;
	}
	return false;
}

bool String_Pino::IsEmpty()
{
	if (top == -1) {
		return true;
	}
	return false;
}

string String_Pino::pop()
{
	string data;

	if (!IsEmpty()) {
		data = stack[top];
		stack[top] = '\0';
		top--;
		return data;
	}
	else {
		cout << "Could not retrieve data, Stack is empty" << endl;
	}

}

void String_Pino::Tulosta()
{
	for (size_t i = 0; i < MAX; i++)
	{
		cout << stack[i] << " ";
	}
	cout << endl;
}

String_Pino::String_Pino()
{
	top = -1;
}


String_Pino::~String_Pino()
{
}
