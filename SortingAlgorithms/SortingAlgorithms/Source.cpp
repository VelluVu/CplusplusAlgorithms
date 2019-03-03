#include "Header.h"

int main() {

	// TEHTÄVÄ 5. Implementoi kaksi haluamaasi järjestämisalgoritmia. Luo sen jälkeen kolme erilaista, suurta
	// taulukkoa
	int arrOne[1000];
	int sizeOne = 1000;

	int arrTwo[1000];
	int sizetwo = 1000;

	int arrThree[1000];
	int sizethree = 1000;

	for (size_t i = 0; i < sizeOne; i++)
	{
		arrOne[i] = rand() % 1000 + 1;
	}

	for (size_t i = 0; i < sizetwo; i++)
	{
		arrTwo[i] = i + 1;
	}

	for (size_t i = 0; i < sizethree; i++)
	{
		arrThree[i] = sizethree - i;
	}

	PrintArray(arrOne, sizeOne);
	SelectionSort(arrOne, sizeOne); //104 ms
	cout << endl;
	PrintArray(arrOne, sizeOne);
	cout << endl;
	
	PrintArray(arrTwo, sizetwo);
	SelectionSort(arrTwo, sizetwo); //112 ms
	cout << endl;
	PrintArray(arrTwo, sizetwo);
	cout << endl;

	PrintArray(arrThree, sizethree);
	SelectionSort(arrThree, sizethree); //109 ms
	cout << endl;
	PrintArray(arrThree, sizethree);
	cout << endl;

	PrintArray(arrOne, sizeOne);
	QuickSort(arrOne, 0, sizeOne - 1); //94 ms
	cout << endl;
	PrintArray(arrOne, sizeOne);

	PrintArray(arrTwo, sizetwo);
	QuickSort(arrTwo, 0, sizetwo - 1); //91 ms
	cout << endl;
	PrintArray(arrTwo, sizetwo);

	PrintArray(arrThree, sizethree);
	QuickSort(arrThree, 0, sizethree - 1); //90 ms
	cout << endl;
	PrintArray(arrThree, sizethree);
	


	system("Pause");
	return 0;

}