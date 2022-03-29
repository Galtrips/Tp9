#pragma once
#include <string>
#include <iostream>
#include "Professeur.h"
#include "Personne.h"
#include "Materiel.h"
#include "Date.h"
#include <time.h> 

using namespace std;

class Pret
{
private:
	Professeur* preteur = nullptr;
	Personne* emprunteur = nullptr;
	Materiel* objet = nullptr;
	Date dateEmprunt;
	Date dateRetour;
public:
	Pret(Professeur& p, Personne& e, Materiel* o) {
		preteur = &p;
		emprunteur = &e;
		objet = o;

		time_t t;
		time_t t2;
		tm currentTime;
		tm currentTime2;
		time(&t);
		time(&t2);
	
		localtime_s(&currentTime, &t);
		localtime_s(&currentTime2, &(t2));
		if (currentTime2.tm_mon < 11)
			currentTime2.tm_mon += 1;
		else
			currentTime2.tm_mon = 0;
		dateEmprunt = Date(currentTime.tm_mday,currentTime.tm_mon + 1,currentTime.tm_year + 1900);
		dateRetour = Date(currentTime2.tm_mday, currentTime2.tm_mon + 1, currentTime2.tm_year + 1900);
	}
	Date Emprunt() const { return dateEmprunt; }
	Date Retour() const { return dateRetour; }
	Materiel* getMateriel() const { return objet; }
	Professeur* getProf() const { return preteur; }
	Personne* getPersonne() const { return emprunteur; }
};

