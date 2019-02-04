#include "Header.h"

int main() {

	/* Laadi ohjelma, joka aluksi arpoo 1000:n alkion taulukon täyteen satunnaisia kokonaislukuja
		väliltä 1…1000.Järjestä taulukon alkiot suuruusjärjestykseen(ks.std::sort).
		Ohjelma kysyy tämän jälkeen käyttäjältä mitä arvoa etsitään(1..1000), ja tarkistaa binäärihaun
		avulla löytyykö ko.arvoa.Ohjelman tulee myös tulostaa kuinka monta ”askelta” binäärihaku otti.
		Aja ohjelma muutaman kerran.Kuinka monta askelta keskimäärin tarvittiin ?		*/

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

	std::cout << "arvotaanko etsittava luku? -1 / etsittävä luku" << std::endl;
	int vastaus;
	std::cin >> vastaus;
	if (vastaus == -1) {
		random = rand() % koko + 1;
	}
	else {
		random = vastaus;
	}

	std::cout << Find(random, taulu) << std::endl;

	/* Laadi luokka Hash, joka osaa tallettaa merkkijonoja, niinikään merkkijono-tyyppisen avainarvon
		perusteella. Luokalla tulee olla kaksi funktiota:	*/

	Hash aseet;
	aseet.Store("Vellu", "Mace");
	aseet.Store("Jeesus", "Miekka");
	cout << aseet.Retrieve("Vellu") << endl;


	system("Pause");
	return 0;

}

//HARJOITUS 1 HAKEE BINÄÄRIHAULLA!
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