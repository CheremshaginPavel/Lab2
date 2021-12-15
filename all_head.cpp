#include "all_head.h"

void menu(Order* order, int cnt)
{
	int answer;
	while (1) {
		system("cls");
		cout << "1) �������� ������ � ����������� � ����������" << endl;
		cout << "2) ������� ������ � ����������� � ����������" << endl;
		cout << "3) ������� ���������� � ��������� �����" << endl;
		cout << "4) ������� ��� �����" << endl;
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
				else {

				}
			}
			case 2: {
				if (!cnt) {
					cout << "�������� ����������, ��� ��� ��� ������� � ������!" << endl;
					system("pause");
					continue;
				}

			}
			case 3: {
				if (!cnt) {
					cout << "������� ���������� � ����� ����������, ��� ��� ��� ������� � ������!" << endl;
					system("pause");
					continue;
				}
			}
			case 4: {
				if (!cnt) {
					cout << "������� ��� ������ ����������, ��� ��� ��� ������� � ������!" << endl;
					system("pause");
					continue;
				}
			}
			default: {
				cout << "�������� ����! ���������� ��� ���!" << endl;
				system("pause");
			}
		}
	}
}