#include "Personne.h"
#include <iostream>
#include <string>

using namespace std;

string Personne::to_String() const {
	string agregation = (string)nom + (string)" " + (string)email;
	return agregation;
}

ostream& operator<<(ostream& o, const Personne& p) {
	o << p.to_String() << endl;
	return o;
}