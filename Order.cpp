#include "Order.h"

Order::Order() { account_payer = account_recip = sum = 0; }

Order::Order(int p, int r, int s) {
	account_payer = p;
	account_recip = r;
	sum = s;
}

Order::Order(const Order& order) : account_payer(order.account_payer), account_recip(order.account_recip), sum(order.sum) {}

void Order::show_account()
{
}
