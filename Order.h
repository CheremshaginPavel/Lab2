#pragma once
#include <iostream>

using namespace std;

class Order {
private:
	int account_payer;
	int account_recip;
	int sum;
public:
	Order();
	Order(int p, int r, int s);
	Order(const Order& order);
	bool add_order();
	void show_account(Order*, int, int);
	bool search_acc(Order*, int);
	void show_all_acc(Order*, int cnt);
};