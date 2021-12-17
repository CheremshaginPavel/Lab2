#pragma once
#include "Order.h"
#include <clocale>
#include <cstdlib>

bool push_back(Order*&, int);
void menu(Order* order, int cnt);
void sort(Order*, int);