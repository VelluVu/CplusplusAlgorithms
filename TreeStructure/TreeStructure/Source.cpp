#include "Header.h"

int main() {

	//Binääripuu?= EI AVL
	GameObject root(100 ,"Hahmo", 0.0, 0.0, 0.0); //root

		GameObject vKasi(80, "VasenKäsi", -0.2, 1.3, 0.1); //root -> vasenchild
			GameObject kiviPussi(90, "KiviPussi", -0.2, 1.3, 0.1); //vKasi -> oikeachild
			GameObject jotain3(70, "Random3", 0.1, 1.2, 0.1); //vKasi -> vasenchild

		GameObject oKasi( 120 , "OikeaKäsi", 0.2, 1.3, 0.1); //root -> oikeachild
			GameObject jotain(115, "Random", 0.1, 1.1, 0.2); //okasi -> vasenchild
			GameObject ase(130 ,"Ritsa" , 0.2, 1.3, 0.1); //oKasi -> oikeachild
				GameObject heitinOsa(135, "KumiLenkki", 0.2, 1.5, 0.1); // ase -> oikeachild
					GameObject kivi(140, "Kivi", 0.2, 1.2, 0.1); //heitinosa -> oikeachild
				GameObject jotain2(125, "Random2", 0.2, 1.2, 0.1); //ase -> vasenchild
	 
	
	/*

	    O
	o--|--o
	  _/ \_
	  ukkeli

	*/
	
	int syvyys = 0;

	root.AddLapsi(&oKasi, 1); //level 1
	root.AddLapsi(&vKasi, 0);
	oKasi.AddLapsi(&ase, 1);  //level 2
	oKasi.AddLapsi(&jotain, 0);
	ase.AddLapsi(&heitinOsa, 1);  //level 3
	ase.AddLapsi(&jotain2, 0);
	heitinOsa.AddLapsi(&kivi, 1);  //level 4
	vKasi.AddLapsi(&kiviPussi,1);  //level 2
	vKasi.AddLapsi(&jotain3, 0);

	//Traverse(&root);
	PrintCoordinates(&root, syvyys);
	

	system("Pause");
	return 0;

};