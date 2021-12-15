#include "all_head.h"

void menu(Order* order, int cnt)
{
	int answer;
	while (1) {
		system("cls");
		cout << "1) Создание записи о плательщике и получателе" << endl;
		cout << "2) Удалить запись о плательщике и получателе" << endl;
		cout << "3) Вывести информацию о расчетном счете" << endl;
		cout << "4) Вывести все счета" << endl;
		cout << "Ваш ответ: ";
		try {
			cin >> answer;
			if (!cin.good()) {
				cout << "Неправильный ввод! Вводить можно только цифры!" << endl;
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
						cout << "Добавление записи не удалось! Попробуйте еще раз!" << endl;
						system("cls");
						continue;
					}
				}
				else {

				}
			}
			case 2: {
				if (!cnt) {
					cout << "Удаление невозможно, так как нет записей в памяти!" << endl;
					system("pause");
					continue;
				}

			}
			case 3: {
				if (!cnt) {
					cout << "Вывести информацию о счете невозможно, так как нет записей в памяти!" << endl;
					system("pause");
					continue;
				}
			}
			case 4: {
				if (!cnt) {
					cout << "Вывести все записи невозможно, так как нет записей в памяти!" << endl;
					system("pause");
					continue;
				}
			}
			default: {
				cout << "Неверный ввод! Попробуйте еще раз!" << endl;
				system("pause");
			}
		}
	}
}