#include "devise.h"
#include "MAD.h"
#include<iostream>

using namespace std;
using namespace Banque;



Banque::devise::devise()

{
    this->valeur = 0.0;

}

Banque::devise::devise(double valeur)
{
    this->valeur = valeur;
}

void Banque::devise::afficher() const
{
    cout << this->valeur << endl;
}


Banque::devise::~devise()
{
    cout << "destructeur de la classe devise" << std::endl;
}

