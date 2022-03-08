#pragma once
#include "devise.h"
#include<iostream>
#include< stdio.h >

namespace Banque {
    class DOLLARS : public devise
    {
    public:
        DOLLARS();
        DOLLARS(double valeur, string symbole);
        void afficher() const;
        ~DOLLARS();
    private:
        string symbole;
    };

}