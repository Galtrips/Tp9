#include "Professeur.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& o, const Professeur& p) {
    o << p.to_String() << endl;
    return o;
}
