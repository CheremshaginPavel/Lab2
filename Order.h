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
	int get_payer();
	int get_sum();
	bool add_order();
	bool show_account(Order*, int, int);
	void show_all_acc(Order*, int cnt);
	Order& operator=(const Order& right);
};