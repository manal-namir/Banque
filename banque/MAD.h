#pragma once
#include "devise.h"
#include<iostream>
#include< stdio.h >

 namespace Banque {
    class MAD : public devise
    {
    public:
        MAD();
        MAD(double valeur, string symbole);
        void afficher() const;
        ~MAD();
    private :
        string symbole;
    };

}