#include "Harjoitus2.h"

int main() {

	int taulukko[10] = { 2,1,3,6,7 };
	int koko = 5;
	int nro = 10;
	int index = 2;
	
	cout << "Alkuperäinen taulukko: ";

	for (size_t i = 0; i < koko; i++)
	{
		cout << taulukko[i] << " ";
	}

	cout << endl;
	cout << "Lisätään tauluun arvo: " << nro << " indexiin: " << index << endl;
	
	koko += 1;
	Insert(taulukko, koko, nro, index);
	
	cout << "Taulukko lisäyksen jälkeen: " << endl;

	for (size_t i = 0; i < koko; i++)
	{
		cout << taulukko[i] << " ";
	}
	cout << endl;

	system("Pause");
	return 0;
}

void Insert(int * taulu, int koko, int addNro, int index)
{
	int temp = koko;
	while (temp >= index) {
		taulu[temp + 1] = taulu[temp];
		temp -= 1;
	}
	taulu[index] = addNro;
	
}
