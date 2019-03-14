#pragma once
#include <iostream>
using namespace std;

/*
a) Toteuta iteratiivinen funktio, joka tulostaa lukujonon n ensimmäistä lukua.
b) Toteuta vastaava funktio rekursiivisesti.
*/

void IteratiivinenFunktio(int * lukuJono, int size, int montakoKertaa) 
{

	for (int i = 0; i <= montakoKertaa; i++)
	{
		cout << lukuJono[i] << ", ";
	}
	cout << endl;

}

void RekursiivinenFunktio(int * lukuJono, int montakoKertaa) 
{
	
	if (montakoKertaa >= 0)
	{
		RekursiivinenFunktio(lukuJono, montakoKertaa - 1);
		cout << lukuJono[montakoKertaa] << ", ";
	}

}

int FibonacciLuvut(int syvyys) {
	//fn = fn - 1 + fn - 2,  0 1    1 2    3 5     8 13

	//rekursion kantatapaus, syvyys <= 0
	if (syvyys <= 0)
		return 0;
	else if (syvyys == 1) // jos ollaan syvyydessä 1 palautetaan 1;
		return 1;
	else //muuten lasketaan fibonaccin luku ja palautetaan se
		return FibonacciLuvut(syvyys - 1) + (syvyys -2);

}