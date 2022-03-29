#include <iostream>
#include <string>
#include <vector>
#include "Personne.h"
#include "Etudiant.h"
#include "Professeur.h"
#include "Stock.h"
#include "Materiel.h"
#include "Pret.h"

using namespace std;


int main(void) {

	Professeur Guillaume("Guillaume", "Email osef");
	cout << Guillaume << endl;

	Stock Entrepot;
	Entrepot.addStuff("Imprimante");
	Entrepot.addStuff("Config");
	Entrepot.addStuff("Video projecteur");
	Entrepot.addStuff("Ecran");

	cout << Entrepot;
	Entrepot.delStuff("Ecran");
	cout << endl;

	cout << Entrepot;

	Entrepot.emprunte(Guillaume, Guillaume, "Config");

	

	return EXIT_SUCCESS;
}
