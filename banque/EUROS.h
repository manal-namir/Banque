#pragma once
#include "devise.h"
#include<iostream>
#include< stdio.h >

namespace Banque {
    class EUROS : public devise
    {
    public:
        EUROS();
        EUROS(double valeur, string symbole);
        void afficher() const;
        ~EUROS();
    private:
        string symbole;
    };

}