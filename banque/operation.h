#pragma once
#include "compte.h"

namespace Banque {
	class operation
	{
	public :
		operation();
		operation(int num, int jour, int annee, int mois, double solde);
		void afficher() const;
		~operation();
	private :
		int num;
		int annee;
		int jour;
		int mois;
		double solde;
	 

	};
}




