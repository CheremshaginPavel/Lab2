#include "all_head.h"

bool push_back(Order *&order, int size) {
	Order* tmp = new Order[size + 1];

	for (int i = 0; i < size; i++) {
		tmp[i] = order[i];
	}

	if (!tmp[size].add_order()) {
		cout << "������! ��������� ������������ ������!" << endl;
		delete[] tmp;
		return false;
	}
	order = tmp;
	return true;
}

void menu(Order* order, int cnt)
{
	int answer;
	while (1) {
		system("cls");
		cout << "1) �������� ������ � ����������� � ����������" << endl;
		cout << "2) ������� ���������� � ��������� �����" << endl;
		cout << "3) ������� ��� �����" << endl;
		cout << "4) �����" << endl;
		cout << "��� �����: ";
		try {
			cin >> answer;
			if (!cin.good()) {
				cout << "������������ ����! ������� ����� ������ �����!" << endl;
				throw 1;
			}
		}
		catch (int) {
			cin.clear();
			while (cin.get() != '\n');
			cin.get();
			continue;
		}
		switch (answer)
		{
			case 1: {
				if (cnt == 0) {
					cnt++;
					order = new Order[cnt];
					if (order[cnt - 1].add_order() == false) {
						cout << "���������� ������ �� �������! ���������� ��� ���!" << endl;
						system("cls");
						continue;
					}
				}
				else if (cnt >= 1) {
					cnt++;
					push_back(order, (cnt - 1));
					sort(order, cnt);
				}
				else if (cnt < 0) {
					cout << "������! ��������� ����������!" << endl;
					delete[] order;
					exit(-2);
				}
				system("pause");
				continue;
			}
			case 2: {
				if (!cnt) {
					cout << "������� ���������� � ����� ����������, ��� ��� ��� ������� � ������!" << endl;
					system("pause");
					continue;
				}
				cout << "������� ����� ���������� ����� ��� ������ ����������: " << endl;
				try {
					cin >> answer;
					if (!cin.good())
						throw 3;
				}
				catch (int) {
					cout << "�������� ����! ������� ����� ������ �����!" << endl;
					cin.clear();
					while (cin.get() != '\n');
					cin.get();
					continue;
				}
				order->show_account(order, cnt, answer);
				system("pause");
				continue;
			}
			case 3: {
				if (!cnt) {
					cout << "������� ��� ������ ����������, ��� ��� ��� ������� � ������!" << endl;
					system("pause");
					continue;
				}
				order->show_all_acc(order, cnt);
				system("pause");
				continue;
			}
			case 4: {
				break;
			}
			default: {
				cout << "�������� ����! ���������� ��� ���!" << endl;
				system("pause");
				continue;
			}
			break;
		}
		break;
	}
}

void sort(Order* order, int cnt) {
	Order tmp;
	for (int i = 0; i < cnt; i++) {
		for (int i = 0; i < cnt - 1; i++) {
			if (order[i].get_payer() > order[i + 1].get_payer()) {
				tmp = order[i];
				order[i] = order[i + 1];
				order[i + 1] = tmp;
			}
		}
	}
}
