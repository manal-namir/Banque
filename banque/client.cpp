#include "client.h"
#include "compte.h"
#include <vector>
#include<iostream>

using namespace std;
using namespace Banque;

Banque::Client::Client()
{
	this->nom = "NULL";
	this->prenom = "NULL";
	this->adresse = "NULL";
	this->comp = vector<compte*>();
}

Banque::Client::Client(string Nom, string Prenom, string Adresse)
{
	this->nom = nom;
	this->prenom = prenom;
	this->adresse = adresse;
	this->comp = vector<compte*>();
}
void Banque::Client::add_compte(compte* c)
{
    this->comp.push_back(c);

}

void Banque::Client::afficher() const
{
    cout << "Nom: " << this->nom << "Prenom: " << this->prenom << "Adresse: " << this->adresse << endl;
    for (int i = 0; i < this->comp.size(); i++)
    {
        this->comp[i]->compte::afficher();
    }
}


Banque::Client::~Client()
{
    this->comp.clear();
}

