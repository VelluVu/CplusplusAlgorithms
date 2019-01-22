#include "Harjoitus1.h"

int main() {

	//HARJOITUS 1 <LUO JA ALUSTA LISTA>
	Solmu* head = new Solmu();
	Solmu* s1 = new Solmu(10);
	Solmu* s2 = new Solmu(20);
	Solmu* s3 = new Solmu(30);
	Solmu* s4 = new Solmu(40);
	Solmu* s5 = new Solmu(50);
	Solmu* s6 = new Solmu(60);
	Solmu* s7 = new Solmu(70);
	Solmu* s8 = new Solmu(80);
	Solmu* s9 = new Solmu(90);
	Solmu* s10 = new Solmu(100);

	head->next = s1;
	s1->next = s2;
	s2->next = s3;
	s3->next = s4;
	s4->next = s5;
	s5->next = s6;
	s6->next = s7;
	s7->next = s8;
	s8->next = s9;
	s9->next = s10;

	head->prev = s10;
	s1->prev = head;
	s2->prev = s1;
	s3->prev = s2;
	s4->prev = s3;
	s5->prev = s4;
	s6->prev = s5;
	s7->prev = s6;
	s8->prev = s7;
	s9->prev = s8;
	s10->prev = s9;

	//HARJOITUS 2 <TULOSTA LISTA>
	s1->TulostaSolmut(head);

	//HARJOITUS 3 <ETSI FUNKTIO>
	//Etsit‰‰n lukuja 30, 10 ja 120 listasta.
	cout << "\n";
	s1->Find(head, 30);
	s1->Find(head, 10);
	s1->Find(head, 5);

	//HARJOITUS 4 <LISƒƒ UUSI SOLMU KOHDE SOLMUN JƒLKEISEEN VƒLIIN JA ASETA TƒLLE ARVO>
	Solmu* uusSolmu = s1->Insert(s5, 5);

	s1->TulostaSolmut(head);
	
	//HARJOITUS 5 <MUOKKAA LISTA CIRCULAR LISTAKSI>
	s10->next = s1;
	s1->TulostaSolmut(s2);

	cout << "\n";
	s1->Find(head, 30);
	s1->Find(head, 10);
	s1->Find(head, 5);

	//HARJOITUS 6 <MUOKKAA LISTA KAHTEENSUUNTAAN LINKITETYKSI, TULOSTA KƒƒNTEISESTI>
	s1->TulostaSolmutBackwards(head);


	delete(head, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, uusSolmu); 
	system("Pause");
	return 0;

};