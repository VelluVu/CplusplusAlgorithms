#include "Harjoitus1.h"

int main() {

	int _taulu[] = { 1,2,1,5,4,2 };
	int _nro5 = 5;
	int _nro10 = 10;
	int _koko = 6;

	cout << "Haetaan taulusta: ";

	for (size_t i = 0; i < _koko; i++)
	{
		if (i != _koko -1) {
			cout << _taulu[i] << ", ";
		}
		else {
			cout << _taulu[i] << " ";
		}
		
	}
	cout << "numeroita " << _nro5 << " ja " << _nro10 << "." << endl;

	bool haku1 = Find(_taulu, _nro5, _koko);
	bool haku2 = Find(_taulu, _nro10, _koko);

	if (haku1) 
	{
		cout << _nro5 << " Löytyi taulusta! " << endl;
	}
	else 
	{
		cout << _nro5 << " Ei löytynyt taulusta! " << endl;
	}

	if (haku2) 
	{
		cout << _nro10 << " Löytyi taulusta! " << endl;
	}
	else
	{
		cout << _nro10 << " Ei löytynyt taulusta! " << endl;
	}

	system("Pause");
	return 0;
}

bool Find(const int * taulu, int nro, int koko)
{

	for (size_t i = 0; i < koko; i++)
	{
		if (taulu[i] == nro) {
			return true;
		}
	}

	return false;
}
