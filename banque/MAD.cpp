#include "MAD.h"
using namespace std;
using namespace Banque;

Banque::MAD::MAD()
    
    : devise (valeur)
{
    this->symbole = "NULL";
}

Banque::MAD::MAD(double valeur, string symbole)

    : devise(valeur)
{
    this->symbole = symbole;
}

void Banque::MAD::afficher() const
{
    this->devise::afficher(); cout << "MAD";
}


Banque::MAD::~MAD()
{
    std::cout << "destructeur de la classe MAD" << std::endl;
}
