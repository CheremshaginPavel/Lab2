#pragma once
#include "account.h"

class Order {
private:
	account _account;
public:
	Order();
	Order(account acc);
	Order(const Order& order);
	bool add_account();
	bool delete_account();
	void show_account();
	~Order();
};