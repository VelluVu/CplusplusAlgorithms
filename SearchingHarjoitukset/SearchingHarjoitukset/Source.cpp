#include "Header.h"

int main() {

	/* Laadi ohjelma, joka aluksi arpoo 1000:n alkion taulukon t�yteen satunnaisia kokonaislukuja
		v�lilt� 1�1000.J�rjest� taulukon alkiot suuruusj�rjestykseen(ks.std::sort).
		Ohjelma kysyy t�m�n j�lkeen k�ytt�j�lt� mit� arvoa etsit��n(1..1000), ja tarkistaa bin��rihaun
		avulla l�ytyyk� ko.arvoa.Ohjelman tulee my�s tulostaa kuinka monta �askelta� bin��rihaku otti.
		Aja ohjelma muutaman kerran.Kuinka monta askelta keskim��rin tarvittiin ?		*/

	int taulu[1000];
	int koko = 1000;
	int random = 0;
	for (size_t i = 0; i < koko; i++)
	{
		taulu[i] = rand() % koko + 1;
	}
	
	std::sort(taulu,taulu+koko);

	for (size_t i = 0; i < koko; i++)
	{
		std::cout << taulu[i] << std::endl;
	}

	std::cout << "arvotaanko etsittava luku? -1 / etsitt�v� luku" << std::endl;
	int vastaus;
	std::cin >> vastaus;
	if (vastaus == -1) {
		random = rand() % koko + 1;
	}
	else {
		random = vastaus;
	}

	std::cout << Find(random, taulu) << std::endl;

	/* Laadi luokka Hash, joka osaa tallettaa merkkijonoja, niinik��n merkkijono-tyyppisen avainarvon
		perusteella. Luokalla tulee olla kaksi funktiota:	*/

	Hash aseet;
	aseet.Store("Vellu", "Mace");
	aseet.Store("Jeesus", "Miekka");
	cout << aseet.Retrieve("Vellu") << endl;


	system("Pause");
	return 0;

}

//HARJOITUS 1 HAKEE BIN��RIHAULLA!
int Find(int data, int* taulu) {
	int lowerBound = 0;
	int upperBound = MAX - 1;
	int midPoint = -1;
	int comparisons = 0;
	int index = -1;

		while (lowerBound <= upperBound)
		{
			comparisons++;

			midPoint = lowerBound + (upperBound - lowerBound) / 2;

			if (taulu[midPoint] == data) 
			{
				index = midPoint;
				break;
			}
			else
			{
				if (taulu[midPoint] < data) 
				{
					lowerBound = midPoint + 1;
				}
				else 
				{
					upperBound = midPoint - 1;
				}
			}
		}

		
		std::cout << "Total comparisons made: "<< comparisons << std::endl;

		if (index = -1) {
			std::cout << "Arvoa ei ollut listassa: " << std::endl;
		}

		return index;

}