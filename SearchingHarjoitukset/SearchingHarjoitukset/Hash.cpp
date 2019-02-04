#include "Hash.h"



Hash::Hash()
{
}


Hash::~Hash()
{
}

void Hash::Store(const string & key, const string & value)
{	
	std::string str = key;
	std::vector<char> temp(str.c_str(), str.c_str() + str.size() + 1u);

	hashTaulu[hash(&temp[0])] = value;

}

string Hash::Retrieve(const string & key)
{
	std::string str = key;
	std::vector<char> temp(str.c_str(), str.c_str() + str.size() + 1u);

	return hashTaulu[hash(&temp[0])];

}
