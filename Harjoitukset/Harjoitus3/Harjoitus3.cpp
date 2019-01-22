#include "Harjoitus3.h"

int main() {

	int taulukko[] = { 2,1,3,6,7 };
	int koko = 5;
	int index = 2;

	cout << "Alkuperäinen taulukko: ";

	for (size_t i = 0; i < koko; i++)
	{
		cout << taulukko[i] << " ";
	}

	cout << endl;
	cout << "Poistetaan taulun arvo indexistä: " << index << endl;

	Remove(taulukko, koko, index);
	koko -= 1;
	cout << "Taulukko poistamisen jälkeen: " << endl;

	for (size_t i = 0; i < koko; i++)
	{
		cout << taulukko[i] << " ";
	}
	cout << endl;

	system("Pause");
	return 0;

}

void Remove(int* taulu, int koko, int index) {

	for (size_t i = index; i < koko; i++)
	{
		int temp = taulu[i];
		taulu[i] = taulu[i + 1];
		taulu[i + 1] = temp;
	}
}