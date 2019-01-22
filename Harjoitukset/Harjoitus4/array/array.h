#pragma once

// Geneerinen taulukko-luokka T-tyyppisten alkioiden tallettamiseen.
// Mahdollistaa taulukon koon muuttamisen suoritusaikana.
template <class T>
class Array
{
public:

	Array();
	~Array();
	T& operator[](unsigned i);
	bool find(const T& item) const;
	void resize(unsigned s);
	unsigned size() const;
	void squeeze_in(unsigned i, const T& item);

private:
	T* _array = nullptr;
	unsigned _size = 0;
};


template<class T>
inline Array<T>::Array()
{
	// Varaa oletuskokoiselle (5) taulukolle tilaa heapista (new).
}

template<class T>
inline Array<T>::~Array()
{
	// Vapauta taulukon tilanvaraus heapista (delete).
}

template<class T>
inline T & Array<T>::operator[](unsigned i)
{
	// Palauta taulukon alkio indeksiss� i.
	// Virhetarkistusta ei tarvita.
}

template<class T>
inline bool Array<T>::find(const T & item) const
{
	// Tutki, l�ytyyk� item taulukosta. Palauta true/false.
	// Kirjoita algoritmi itse.

	return false;
}

template<class T>
inline void Array<T>::resize(unsigned s)
{
	// Kasvata tai pienenn� taulukko uuteen kokoon s.
	// Vanhat arvot tulee kopioida uuteen taulukkoon
	// (niin monta kuin mahtuu, jos taulukko pieneni).
	// Muista varoa muistivuotoja!
}

template<class T>
inline unsigned Array<T>::size() const
{
	// Palauttaa taulukon koon.
	return 0;
}

template<class T>
inline void Array<T>::squeeze_in(unsigned i, const T & item)
{
	// Lis�� annettuun indeksiin i uuden alkion item - 
	// taulukon koko siis kasvaa 1:ll�.
	// T�m�n pit�� toimia oikein my�s silloin, jos lis�ys
	// halutaan tehd� taulukon ensimm�iseksi tai viimeiseksi
	// alkioksi (tai jos taulukon koko on 0).
}
