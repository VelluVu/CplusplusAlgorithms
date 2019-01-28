#pragma once
#include <string>
#include <iostream>
using namespace std;
#define MAX 4

class String_Pino
{
public:

	string stack [MAX];
	int top;
	void Push(string data);
	bool IsFull();
	bool IsEmpty();
	string pop();
	void Tulosta();
	String_Pino();
	~String_Pino();
};

