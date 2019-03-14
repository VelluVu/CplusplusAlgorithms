#include "Header.h"

int main()
{

	int n[] = { 2,3,4,5,6,7,8,9 };
	int size = 8;
	int montakoKertaa = 0;
	cout << "Montako Kertaa tulostetaan? " << endl;
	cin >> montakoKertaa;

	cout << "Iteratiivinen : " << endl;
	IteratiivinenFunktio(n, size, montakoKertaa);

	cout << "Rekursiivinen : " << endl;
	RekursiivinenFunktio(n, montakoKertaa);
	cout << endl;
	cout << "Fibonacci" << endl;

	//Tulostetaan fibonacciluvut
	for (int i = 0; i < montakoKertaa; i++)
	{
		cout << FibonacciLuvut(i) << " ";
	}
	
	cout << endl;

	system("Pause");
	return 0;

}