#include "Order.h"

Order::Order() { account_payer = account_recip = sum = 0; }

Order::Order(int p, int r, int s) {
	account_payer = p;
	account_recip = r;
	sum = s;
}

Order::Order(const Order& order) : account_payer(order.account_payer), account_recip(order.account_recip), sum(order.sum) {}

int Order::get_payer() { return account_payer; }

int Order::get_sum() { return sum; }

bool Order::add_order() {
	int answ;
	system("cls");
	cout << "Создание новой записи" << endl << endl;
	cout << "Введите расчетный счет отправителя: ";
	try {
		cin >> answ;
		if (!cin.good())
			throw 3;
	}
	catch (int) {
		cout << "Неверный ввод! Вводить можно только цифры!" << endl;
		cin.clear();
		while (cin.get() != '\n');
		cin.get();
		return false;
	}
	account_payer = answ;
	cout << "Введите номер расчетного счета получателя: ";
	try {
		cin >> answ;
		if (!cin.good())
			throw 3;
	}
	catch (int) {
		cout << "Неверный ввод! Вводить можно только цифры!" << endl;
		cin.clear();
		while (cin.get() != '\n');
		cin.get();
		return false;
	}
	account_recip = answ;
	cout << "Введите сумму перевода: ";
	try {
		cin >> answ;
		if (!cin.good())
			throw 3;
	}
	catch (int) {
		cout << "Неверный ввод! Вводить можно только цифры!" << endl;
		cin.clear();
		while (cin.get() != '\n');
		cin.get();
		return false;
	}
	sum = answ;
	cout << "Было снято со счета " << sum << "." << endl;
	return true;
}

bool Order::show_account(Order* order, int cnt, int pt) {
	bool flag = false;
	for (int i = 0; i < cnt; i++) {
		if (order[i].account_payer == pt) {
			cout << "Расчетный счет отправителя: " << order[i].account_payer << endl;
			cout << "Расчетный счет получателя: " << order[i].account_recip << endl;
			cout << "Сумма перевода: " << order[i].sum << endl << endl;
			flag = true;
		}
	}
	if (!flag) {
		cout << "Такого расчетного счета не существует!" << endl;
		return false;
	}
	else {
		return true;
	}
	return false;
}

void Order::show_all_acc(Order* order, int cnt) {
	for (int i = 0; i < cnt; i++) {
		cout << "№ " << (i + 1) << endl;
		cout << "Расчетный счет отправителя: " << order[i].account_payer << endl;
		cout << "Расчетный счет получателя: " << order[i].account_recip << endl;
		cout << "Сумма перевода: " << order[i].sum << endl << endl;
	}
}

Order& Order::operator=(const Order& right) {
	if (this == &right) {
		return *this;
	}
	account_payer = right.account_payer;
	account_recip = right.account_recip;
	sum = right.sum;
	return *this;
}
