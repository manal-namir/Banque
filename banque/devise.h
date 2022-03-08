#pragma once

namespace Banque {
	class devise
	{
	public:
		devise();
		devise(double valeur);
		void afficher() const;
		~devise();

	protected:
		double valeur;
	};
	}

