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