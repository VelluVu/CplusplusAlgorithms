#pragma once
#include <iostream>
#include <string>
using namespace std;

class Node;

class Char_Jono
{
public:

	Node* _front = nullptr;
	Node* _end = nullptr;
	Char_Jono();
	~Char_Jono();
	bool IsFull();
	bool IsEmpty();
	char Peek(Node*);
	int Size(Node*);
	void Enqueue(char data);
	char Dequeue();

};

class Node {

public:
	char _data;
	Node* _next;
};
