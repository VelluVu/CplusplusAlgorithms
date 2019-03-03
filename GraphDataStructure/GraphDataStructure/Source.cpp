#include "Header.h"

int main() {

	Solmu a, b, c, d, e;
	stack<Solmu> pino;
	Solmu* current;

	/* VERKKO

		b <-> a <-> e
				 ^	        ^
				  |		     |
				  |		     v
				  c  <-	d

	*/

	a.AddKaari(b);
	a.AddKaari(e);
	b.AddKaari(a);
	e.AddKaari(a);
	e.AddKaari(d);
	d.AddKaari(c);
	c.AddKaari(a);

	a.SetNimi("eka");
	b.SetNimi("toka");
	c.SetNimi("kolmas");
	d.SetNimi("nelj‰s");
	e.SetNimi("viides");

	a._vierailtu = true;
	a.TulostaNimi();
	pino.push(a);
	current = &a;

	//niin kauan kuin pino ei ole tyhj‰
	while (!pino.empty()) 
	{
		//k‰yd‰‰n l‰pi pinon "verkon" p‰‰llimm‰isen solmun naapurit
		for (Solmu* s : current->_naapurit)
		{
			//jos pinon p‰‰llimm‰isen solmun naapuri ei ole vierailtu
			if (!s->_vierailtu)
			{
				//t‰m‰nhetkinen pointer solmu siirtyy osoittamaan pinon p‰‰llimm‰isen ensimm‰ist‰ naapuria
				current = s;
				//sek‰ pinon p‰‰llimm‰isen seuraava pointer osoittamaan naapuria
				pino.top()._next = s;
				//asetetaan myˆs naapurin edellinen osoittamaan pinon ensimm‰ist‰ solmua
				current->_prev = &pino.top();
				//tulostetaan naapurin nimi
				current->TulostaNimi();
				//asetetaan solmu vierailluksi
				current->_vierailtu = true;			
				//lis‰t‰‰n t‰m‰ pinoon
				pino.push(*current);
			}
		}

		pino.pop();

	}

	system("Pause");

	return 0;

}