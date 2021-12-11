#pragma once

class Order {
private:
	int account_payer;
	int account_recip;
	int sum;
public:
	Order();
	Order(int p, int r, int s);
	Order(const Order& order);
	void show_account();
};