#include "Etudiant.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& o, const Etudiant& p) {
    o << p.to_String() << " " << p.getNumero() << endl;
    return o;
}
