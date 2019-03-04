#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define DIMENSION 3

class GameObject
{
public:
	string _name;
	double _coordinates[DIMENSION]; //x,y,z
	GameObject* _vasenLapsi = nullptr;
	GameObject* _oikeaLapsi = nullptr;
	GameObject(string name, double x, double y, double z)
	{
		_name = name;
		_coordinates[0] = x;
		_coordinates[1] = y;
		_coordinates[2] = z;

	}
	void AddLapsi(GameObject* lapsi, bool vasen)
	{
		if (vasen) 
		{
			_vasenLapsi = lapsi;
		}
		else 
		{
			_oikeaLapsi = lapsi;
		}
	}
};

void Traverse(GameObject* go)
{

	
	if (go == nullptr) 
	{
		return;
	}

	cout << go->_name << endl;

	for (int i = 0; i < DIMENSION; i++)
	{
		cout << go->_coordinates[i] << " ; ";
	}

	cout << endl;

	Traverse(go->_vasenLapsi);
	Traverse(go->_oikeaLapsi);
	
}

/* 
GO:n koordinaatit ovat aina vanhempi-solmun koordinaatistossa, ts. suhteessa vanhemman
koordinaatteihin. Kirjoita funktio print_coordinates, joka tulostaa kaikkien lehtisolmujen
absoluuttiset koordinaatit (ts. kaikkien vanhempi-solmujen koordinaatit tulee summata, ja t‰h‰n
lis‰t‰‰n itse lehtisolmun koordinaatit). Testaa.
*/

void  PrintCoordinates(GameObject* go)
{
	
	if (go == nullptr)
	{
		return;
	}

	cout << go->_name << endl;

	for (int i = 0; i < DIMENSION; i++)
	{
		cout << go->_coordinates[i] << " ; ";
	}

	cout << endl;

	PrintCoordinates(go->_vasenLapsi);
	PrintCoordinates(go->_oikeaLapsi);

}