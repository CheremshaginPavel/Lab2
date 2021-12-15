#include "Order.h"

Order::Order() { account_payer = account_recip = sum = 0; }

Order::Order(int p, int r, int s) {
	account_payer = p;
	account_recip = r;
	sum = s;
}

Order::Order(const Order& order) : account_payer(order.account_payer), account_recip(order.account_recip), sum(order.sum) {}

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
	this->account_payer = answ;
	cout << "Введите номер расчетного счета получателя: ";
	cin >> answ;
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
	this->account_recip = answ;
	cout << "Введите сумму перевода: ";
	cin >> answ;
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
	this->sum = answ;
	return true;
}

void Order::show_account(Order* order, int cnt, int pt) {
	for (int i = 0; i < cnt; i++) {
		if (order[i].account_payer == pt) {
			cout << "Расчетный счет отправителя: " << order[i].account_payer << endl;
			cout << "Расчетный счет получателя: " << order[i].account_recip << endl;
			cout << "Сумма перевода: " << order[i].sum << endl;
			system("pause");
			break;
		}
	}
}

bool Order::search_acc(Order* order, int n) {
	for (int i = 0; i < n; i++) {
		if (order[i].account_payer == n)
			return true;
	}
	return false;
}

void Order::show_all_acc(Order* order, int cnt) {
	for (int i = 0; i < cnt; i++) {
		cout << "№ " << i << endl;
		cout << "Расчетный счет отправителя: " << order[i].account_payer << endl;
		cout << "Расчетный счет получателя: " << order[i].account_recip << endl;
		cout << "Сумма перевода: " << order[i].sum << endl << endl;
	}
}
