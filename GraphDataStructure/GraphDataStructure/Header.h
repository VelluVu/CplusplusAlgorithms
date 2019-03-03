#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solmu 
{

public:
	string _nimi;
	Solmu* _prev, * _next = nullptr;
	vector<Solmu*> _naapurit;
	bool _vierailtu = false;
	bool operator== (const Solmu& rhs) const 
	{
		return _nimi == rhs._nimi;
	}

	void TulostaNimi() 
	{

		cout << _nimi << endl;

	}

	void AddKaari(Solmu& s) 
	{

		_naapurit.push_back(&s);

	}

	void SetNimi(string nimi) 
	{

		_nimi = nimi;

	}

	Solmu* GetUnvisitedSolmu() 
	{

		for (Solmu* s : _naapurit) 
		{
			if (!s->_vierailtu) 
			{
				return s;
			}	
		}
	}
};