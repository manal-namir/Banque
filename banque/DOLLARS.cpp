#include "DOLLARS.h"

using namespace std;
using namespace Banque;

Banque::DOLLARS::DOLLARS()

    : devise(valeur)
{
    this->symbole = "NULL";
}

Banque::DOLLARS::DOLLARS(double valeur, string symbole)

    : devise(valeur)
{
    this->symbole = symbole;
}

void Banque::DOLLARS::afficher() const
{
    this->devise::afficher(); cout << "DOLLARS";
}


Banque::DOLLARS::~DOLLARS()
{
    std::cout << "destructeur de la classe DOLLARS" << std::endl;
}
