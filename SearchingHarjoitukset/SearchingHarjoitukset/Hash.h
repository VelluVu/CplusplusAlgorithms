#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define HASHSIZE 50

class Hash
{
public:
	string hashTaulu[HASHSIZE];
	Hash();
	~Hash();
	void Store(const string& key, const string& value);
	string Retrieve(const string& key);
	unsigned hash(char *s)
	{
		unsigned hashval;
		for (hashval = 0; *s != '\0'; s++)
			hashval = *s + 31 * hashval;
		return hashval % HASHSIZE;
	}

};

