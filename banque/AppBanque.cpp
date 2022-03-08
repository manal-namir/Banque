#include "AppBanque.h"
#include "client.h"
#include <vector>
#include<iostream>
using namespace std;
using namespace Banque;

Banque::AppBanque::AppBanque()
{
	this->Appcli = vector<Client*>;
}

void Banque::AppBanque::add_client(client* cl)
{
	this->Appcli.push_back(cl);
}

Banque::AppBanque::~AppBanque()
{
	for (int i = 0; i < this->Appcli.size(); i++)
	{
		delete this->Appcli[i];
	}
}

