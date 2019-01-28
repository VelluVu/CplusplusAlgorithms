#include "Char_Jono.h"



Char_Jono::Char_Jono()
{
}


Char_Jono::~Char_Jono()
{
	while (!IsEmpty()) {
		Node* temp = _front;
		_front = _front->_next;
		delete temp;
	}
	_end = nullptr;
}

bool Char_Jono::IsFull()
{
	//jos linkitetty lista on älytön tai ohjelmasta riippuen täynnä... niin tätä tarvii.
	return false;
}

bool Char_Jono::IsEmpty()
{
	if (_front == nullptr) {
		return true;
	}
	return false;
}

char Char_Jono::Peek(Node*)
{
	return 0;
}

int Char_Jono::Size(Node*)
{
	return 0;
}

void Char_Jono::Enqueue(char data)
{
	
	if (IsEmpty()) {
		Node* queue = new Node();
		queue->_data = data;
		queue->_next = nullptr;
		_front = _end = queue;
		
	}
	else {
		Node* queue = new Node();
		queue->_data = data;
		_end->_next = queue;
		_end = queue;
	}
}

char Char_Jono::Dequeue()
{

	char data;

	if (!IsEmpty()) {
		data = _front->_data;
		_front = _front->_next;
		return data;
	}
	else {
		cout << "Jono on tyhjä! " << endl;
	}

	return 0;
}
