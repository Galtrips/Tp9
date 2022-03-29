#pragma once
#include "Materiel.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Date.h"
#include "Pret.h"

using namespace std;

class Stock
{
private:
	vector<Materiel*> index;
	multimap<string, Pret*> Emprunt;
	Materiel* find(string n);
public:
	Stock() { ; }
	vector<Materiel*> getIndex() const { return index; }
	multimap<string, Pret*> getEmprunt() const { return Emprunt; }

	void addStuff(string n);
	void delStuff(string n);
	void emprunte(Professeur& p, Personne& e, string o);

	~Stock();
};

ostream& operator<<(ostream& o, const Stock& s);
