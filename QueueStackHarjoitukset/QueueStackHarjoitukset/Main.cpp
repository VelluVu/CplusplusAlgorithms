#include "Header.h"

int main() {

	/*
	Laadi luokka String_Pino, johon voidaan tallettaa merkkijonoja (std::string). Luokan tulee
	toteuttaa ainakin operaatiot push ja pop. Toteutuksen tulee perustua staattisesti varattuun
	taulukkoon. Virhetarkistuksia ei tarvitse toteuttaa, vaan voit esim. olettaa, ett� tyhj�st� pinosta ei
	yritet� poistaa alkiota, ja ett� t�yteen pinoon ei yritet� lis�t� alkiota. Testaa.	*/

	//HARJOITUS 1:
	
	string merkkijono;
	String_Pino pino;

	for (size_t i = 0; i < MAX; i++)
	{
		cout << "Lis�� pinoon merkkijono : " << endl;
		cin >> merkkijono;
		pino.Push(merkkijono);
	}
	pino.Tulosta();
	string ylin = pino.pop();
	cout << ylin << endl;
	pino.Tulosta();
	
	//HARJOITUS 1 P��TTYY

	//HARJOITUS 2:

	/*
	Laadi luokka Char_Jono, johon voidaan tallettaa yksitt�isi� merkkej� (char). Luokan tulee
	toteuttaa ainakin operaatiot enqueue ja dequeue. Toteutuksen tulee perustua linkitettyyn listaan.
	Luo listan solmut new:ll� ja tuhoa ne delete:ll�. Virhetarkistuksia ei tarvitse toteuttaa, vaan voit
	esim. olettaa, ett� tyhj�st� jonosta ei yritet� poistaa alkiota. Testaa.
	*/

	Char_Jono jono;
	jono.Enqueue('J');
	jono.Enqueue('O');
	jono.Enqueue('N');
	jono.Enqueue('O');
	
	char one = jono.Dequeue();
	char two = jono.Dequeue();
	char three = jono.Dequeue();
	char four = jono.Dequeue();
	jono.Dequeue();

	cout << one << two << three << four << endl;


	
	

	//HARJOITUS 2 P��TTYY

	system("Pause");
	return 0;
}