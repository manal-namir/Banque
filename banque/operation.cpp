#include "operation.h"
#include <string>
#include <iostream>
#include< stdio.h >
#include "compte.h"
using namespace std;
using namespace Banque;

Banque::operation::operation()
{
	this->num = 0;
	this->jour = 0;
	this->mois = 0;
	this->annee = 0;
	this->solde = 0.0;
}

Banque::operation::operation(int num, int jour, int annee, int mois, double solde)
{
	this->num = num;
	this->jour = jour;
	this->mois = mois;
	this->annee = annee;
	this->solde = solde;
}

void Banque::operation::afficher() const
{
	cout << this->jour << "/" << this->mois << "/" << this->annee << "|" << "n°" << this->num << "||" << this->solde << "MAD " << endl;
}

Banque::operation::~operation()
{
	std::cout << "destructeur de la classe operation" << std::endl;
}


