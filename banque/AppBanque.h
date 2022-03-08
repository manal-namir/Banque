#pragma once
#include <vector>
#include "compte.h"
#include "client.h"

typedef unsigned client;
namespace Banque {

	class AppBanque
	{
	public:
		AppBanque();
		void add_client(client* cl);
		~AppBanque();

	private:
		vector<Client*> Appcli;
	};

}