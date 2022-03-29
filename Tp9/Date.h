#pragma once
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Date
{
private:
	string date;
public:
	Date() { ; }
	Date(int j, int m, int a) {
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
		date = annee + mois  + jour;
	}
	void setDate(int j, int m, int a) {
		string mois;
		string jour;
		string annee;
		annee = a;
		if (m < 10) {
			mois = (string)(0);
			mois += m;
		}
		if (j < 10) {
			jour = (string)(0);
			jour += j;
		}
		date = annee + "/" + mois + "/" + jour;
	}
	
	string getDate() const { return date; }
};

