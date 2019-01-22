#include "Solmu.h"



Solmu::Solmu()
{
	next = nullptr;
	prev = nullptr;
}

Solmu::Solmu(int value)
{
	data = value;
}


Solmu::~Solmu()
{
	next = nullptr;
	prev = nullptr;
	delete(prev,next);
}

//HARJOITUS 2 <TULOSTA LISTAN ALKIOT>, MUOKATTU SOPIVAKSI HARJOITUS 5 KANSSA
void Solmu::TulostaSolmut(const Solmu* head)
{
	cout << "\n";
	int cycles = 0;
	Solmu* temp = new Solmu();
	temp->next = head->next;

	while (temp->next != nullptr) {
		if (cycles == 1) {
			break;
		}
		cout << temp->next->data << " ";
		temp->next = temp->next->next;
		
		if (temp->next == head->next) {
			cycles++;
		}
	}
	cout << "\n";
	delete (temp);
}

//HARJOITUS 3 <ETSI FUNKTIO>
bool Solmu::Find(const Solmu * head, int value)
{
	
	int cycles = 0;
	Solmu* temp = new Solmu();
	temp->next = head->next;

	while (temp->next != nullptr) {
		if (cycles == 1) {
			break;
		}
		if (temp->next->data == value) {

			cout << "Löysi arvon " << value << " listasta!" << endl;
			return true;

		}

		temp->next = temp->next->next;
		if (temp->next == head->next) {
			cycles++;
		}
	}

	delete(temp);
	cout << "Arvoa " << value << " ei löytynyt listasta!" << endl;
	return false;
}

//HARJOITUS 4 <LISÄÄ UUSI SOLMU KOHDE SOLMUN JÄLKEISEEN VÄLIIN JA ASETA TÄLLE ARVO>
Solmu* Solmu::Insert(Solmu * target, int value)
{
	Solmu* newSolmu = new Solmu(value);
	newSolmu->next = target->next;
	newSolmu->prev = target;
	target->next = newSolmu;
	return newSolmu;
}

//HARJOITUS 6 <TAKAPERIN TULOSTUS>
void Solmu::TulostaSolmutBackwards(const Solmu * head)
{
	cout << "\n";
	int cycles = 0;
	Solmu* temp = new Solmu();
	temp->prev = head->prev;
	
	while (temp->prev != nullptr) {
		if (cycles == 1) {
			break;
		}
		cout << temp->prev->data << " ";
		temp->prev = temp->prev->prev;

		if (temp->prev == head->prev) {
			cycles++;
		}
	}

	cout << "\n";
	delete(temp);

}
