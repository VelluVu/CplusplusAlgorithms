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
	int _key = 0;
	double _coordinates[DIMENSION]; //x,y,z
	double _absoluteCoordinates[DIMENSION];
	GameObject* _vanhempi = nullptr;
	GameObject* _vasenLapsi = nullptr;
	GameObject* _oikeaLapsi = nullptr;
	std::vector<GameObject*> _lapset;


	GameObject(int key, string name, double x, double y, double z)
	{
		_key = key;
		_name = name;
		_coordinates[0] = x;
		_coordinates[1] = y;
		_coordinates[2] = z;
		_absoluteCoordinates[0] = x;
		_absoluteCoordinates[1] = y;
		_absoluteCoordinates[2] = z;
		_oikeaLapsi = nullptr;
		_vasenLapsi = nullptr;
		_vanhempi = nullptr;
	}

	void PrintCord() {

		cout << "Coords: ";
		for (int i = 0; i < DIMENSION; i++)
		{

			cout << _coordinates[i] << " ";
			
		}
		cout << endl;
		cout << "AbsCoords: ";

		for (int i = 0; i < DIMENSION; i++)
		{

			cout << _absoluteCoordinates[i] << " ";

		}
		cout << endl;

		cout << endl;
		
	}

	void AddLapsi(GameObject* lapsi, bool oikea)
	{
		lapsi->_vanhempi = this;

		if (oikea) 
		{
			_oikeaLapsi = lapsi;
			_lapset.push_back(_oikeaLapsi);
		}
		else 
		{
			_vasenLapsi = lapsi;
			_lapset.push_back(_vasenLapsi);
		}

		
	}
};

void TyhjaaArray(double* arr) {
	for (int i = 0; i < DIMENSION; i++)
	{
		arr[i] = 0;
	}
}

void Sum(double* arr, double* arr2)
{

	for (int i = 0; i < DIMENSION; i++)
	{
		arr[i] += arr2[i];
	}
}

void Traverse(GameObject* go)
{
	
	if (go == nullptr) 
	{
		cout << go->_name << endl;
		go->PrintCord();
		return;
	}

	cout << go->_name << endl;

	go->PrintCord();

	if(go->_vasenLapsi != nullptr)
		Traverse(go->_vasenLapsi);

	if(go->_oikeaLapsi != nullptr)
		Traverse(go->_oikeaLapsi);
	
}

/* 
GO:n koordinaatit ovat aina vanhempi-solmun koordinaatistossa, ts. suhteessa vanhemman
koordinaatteihin. Kirjoita funktio print_coordinates, joka tulostaa kaikkien lehtisolmujen
absoluuttiset koordinaatit (ts. kaikkien vanhempi-solmujen koordinaatit tulee summata, ja tähän
lisätään itse lehtisolmun koordinaatit). Testaa.
*/

void PrintCoordinates(GameObject* go, int syvyys)
{
	
	if (go == nullptr || go->_vasenLapsi == nullptr && go->_oikeaLapsi == nullptr)
	{
		if (go != nullptr) 
		{
			syvyys++;
			cout << "LEVEL: " << syvyys << endl;
			cout << "Ollaan lehdessä " << go->_key << endl;
			cout << go->_name << endl;
			Sum(go->_absoluteCoordinates, go->_vanhempi->_absoluteCoordinates);
			cout << "LEHDEN KOORDINAATIT" << endl;
			go->PrintCord();
			syvyys = 0;
		}
		else 
		{
			syvyys++;
			cout << "LEVEL: " << syvyys << endl;
			syvyys = 0;
		}

		return;
	}
	else if (go->_vanhempi == nullptr || go->_key == 100) {
		cout << "Ollaan Rootissa " << go->_key << endl;
		syvyys = 0;
		cout << "LEVEL: " << syvyys << endl;
		cout << "GameObjectin Nimi: " << go->_name << endl;
	}
	else 
	{
		cout << "Ollaan childissa " << go->_key <<  endl;
		syvyys++;
		cout << "LEVEL: " << syvyys << endl;
		cout << "GameObjectin Nimi: " << go->_name << endl;
	}

	//Lisätään tämän obj absoluuttisiin koordinaatteihin vanhemman absoluuttiset koordinaatit
	if (go->_vanhempi != nullptr && go != nullptr) 
		Sum(go->_absoluteCoordinates, go->_vanhempi->_absoluteCoordinates);
	
	if (go->_vasenLapsi != nullptr && go != nullptr)
		cout << "Mennään vasempaan : " << endl;
		PrintCoordinates(go->_vasenLapsi, syvyys);

	if (go->_oikeaLapsi != nullptr && go != nullptr)
		cout << "Mennään oikeaan : " << endl;
		PrintCoordinates(go->_oikeaLapsi, syvyys);


}