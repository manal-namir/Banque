#pragma once
#include<iostream>
#include< stdio.h >
#include <vector>
#include "compte.h"
#include "operation.h"

using namespace std;
typedef unsigned compte;
namespace Banque {

	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		vector<compte*> comp;

	public:
		Client();
		Client(string nom, string prenom, string adresse);
		void add_compte(compte* c);
		void afficher() const; 
		~Client();
	};

}

