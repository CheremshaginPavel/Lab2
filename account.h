#pragma once

class account {
private:
	int account_payer;
	int account_recip;
	int sum;
public:
	account();
	account(int p, int r, int s);
	account(const account& _acc);
	void set_acc_payer(int);
	int get_acc_payer();
	void set_acc_recip(int);
	int get_acc_recip();
	void set_sum(int);
	int get_sum();
	~account()
};