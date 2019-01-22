#pragma once
#include <iostream>
using namespace std;

class Solmu
{
public:

	int data;
	Solmu* next;
	Solmu* prev;
	Solmu();
	Solmu(int value);
	~Solmu();
	void TulostaSolmut(const Solmu* head);
	bool Find(const Solmu* head, int value);
	Solmu* Insert(Solmu* target, int value);
	void TulostaSolmutBackwards(const Solmu* head);
};

