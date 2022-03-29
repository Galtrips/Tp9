#pragma once
#include <string>
#include <iostream>

using namespace std;

class Personne
{
protected:
	string nom;
	string email;
public:
	Personne(string n, string mail) : nom(n), email(mail) { ; }
	string getNom() { return nom; }
	string getMail() { return email; }

	string to_String() const;
};

ostream& operator<<(ostream& o, const Personne& p);