#include "Header.h"

int main() {

	GameObject root("Hahmo", 0.0, 0.0, 0.0);
	GameObject oKasi("OikeaKäsi", 0.2, 1.3, 0.1);
	GameObject vKasi("VasenKäsi", -0.2, 1.3, 0.1);
	GameObject ase("Ritsa", 0.2, 1.3, 0.1);
	GameObject kiviPussi("KiviPussi", -0.2, 1.3, 0.1);
	GameObject ritsanHeitinOsa("KumiLenkki", 0.2, 1.5, 0.1);
	GameObject kivi("Kivi", 0.2, 1.2, 0.1);
	GameObject jotain("Random", 0.1, 1.1, 0.2);
	GameObject jotain2("Random2", 0.2, 1.2, 0.1);
	GameObject jotain3("Random3", 0.1, 1.2, 0.1);
	/*

	    O
	o--|--o
	  _/ \_
	  ukkeli

	*/

	root.AddLapsi(&oKasi, 1);
	root.AddLapsi(&vKasi, 0);
	oKasi.AddLapsi(&ase, 1);
	oKasi.AddLapsi(&jotain, 0);
	ase.AddLapsi(&ritsanHeitinOsa, 1);
	ase.AddLapsi(&jotain2, 0);
	ritsanHeitinOsa.AddLapsi(&kivi, 1);
	vKasi.AddLapsi(&kiviPussi,1);
	vKasi.AddLapsi(&jotain3, 0);

	Traverse(&root);
	PrintCoordinates(&root);

	system("Pause");
	return 0;

};