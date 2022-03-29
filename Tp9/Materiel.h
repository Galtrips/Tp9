#pragma once
#include <string>

using namespace std;

class Materiel
{
private:
	string nom;
	bool estEmprunte;
public:
	Materiel(string n) : nom(n), estEmprunte(false) { ; }
	string getnom() const { return nom; }
	bool getEmprunte() const { return estEmprunte; }
	void setNom(string n) {
		nom = n;
	}
	void setEmprunte(bool v) {
		estEmprunte = v;
	}
};

