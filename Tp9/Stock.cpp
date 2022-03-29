#include "Stock.h"
#include "Materiel.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Stock::addStuff(string n) {
	index.push_back(new Materiel(n));
}

Materiel* Stock::find(string n) {
	for (auto i : index) {
		if (i->getnom() == n) {
			return i;
		}
	}
	return nullptr;
}

void Stock::delStuff(string n) {
	vector <Materiel*>::iterator it = index.begin();
	for (auto i : index) {
		if (i->getnom() == n) {
			delete i;
			index.erase(it);
			return;
		}
		else {
			it++;
		}
	}
}

ostream& operator<<(ostream& o, const Stock& s) {
	for (auto i : s.getIndex()) {
		o << i->getnom() << " : \t" << (i->getEmprunte() == true ? "Non Disponible" : "Disponible") << endl;
	}
	return o;
}

string DateRet(int j, int m, int a) {
	string mois;
	string jour;
	string annee;
	annee = to_string(a);
	if (m < 10) {
		mois = "0";
		mois += to_string(m);
	}
	else {
		mois = to_string(m);
	}
	if (j < 10) {
		jour = "0";
		jour += to_string(j);
	}
	else {
		jour = to_string(j);
	}
	string date = annee + mois + jour;
	return date;
}

void Stock::emprunte(Professeur& p, Personne& e, string o) {
	auto pointeurO = find(o);

	time_t t2;
	tm currentTime2;
	time(&t2);
	localtime_s(&currentTime2, &(t2));
	if (currentTime2.tm_mon < 11)
		currentTime2.tm_mon += 1;
	else
		currentTime2.tm_mon = 0;
	string dateNow = DateRet(currentTime2.tm_mday, currentTime2.tm_mon + 1, currentTime2.tm_year + 1900);
	Emprunt.insert(pair<string, Pret*>(dateNow, new Pret(p, e, pointeurO)));
}

Stock::~Stock() {
	for (auto i : index) {
		delete i;
	}
	for (auto i : Emprunt) {
		delete i.second;
	}
}