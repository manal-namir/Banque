#include "EUROS.h"
using namespace std;
using namespace Banque;

Banque::EUROS::EUROS()

    : devise(valeur)
{
    this->symbole = "NULL";
}

Banque::EUROS::EUROS(double valeur, string symbole)

    : devise(valeur)
{
    this->symbole = symbole;
}

void Banque::EUROS::afficher() const
{
    this->devise::afficher(); cout << "EUROS";
}

Banque::EUROS::~EUROS()
{
    std::cout << "destructeur de la classe EUROS" << std::endl;
}
