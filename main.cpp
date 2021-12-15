#include "all_head.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	Order* order = nullptr;
	menu(order, n);
	delete[] order;
	order = nullptr;
	return 0;
}