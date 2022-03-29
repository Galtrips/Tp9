#pragma once
#include <string>
#include "Personne.h"
using namespace std;

class Etudiant :
    public Personne
{
private:
    string numero;
public:
    Etudiant(string n, string mail, string num) : Personne(n, mail), numero(num) { ; }
    string getNumero() const { return numero; }
};

ostream& operator<<(ostream& o, const Etudiant& p);