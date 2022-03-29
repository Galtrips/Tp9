#pragma once
#include <string>
#include "Personne.h"
using namespace std;

class Professeur :
    public Personne
{
public:
    Professeur(string n, string mail) : Personne(n, mail) { ; }
};

ostream& operator<<(ostream& o, const Professeur& p);