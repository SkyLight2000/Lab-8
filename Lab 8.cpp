#include "stdafx.h"
#include "funcs.h"

int main()
{
	SetConsoleOutputCP(1251);
	const char* menu_items[] =
	{
		"Создать объект типа SymbString"
		, "Создать объект типа BinString"
		, "ShowOct для BinString"
		, "ShowDec для BinString"
		, "ShowHex для BinString"
		, "Удалить объект типа SymbString"
		, "Удалить объект типа BinString"
		, "Выход"
		, NULL
	};
	handler_t handlers[] = {
		tab_handler1
		, tab_handler2
		, tab_handler3
		, tab_handler4
		, tab_handler5
		, tab_handler6
		, tab_handler7
		, tab_handler8
	};
	int idx;
	do {
		idx = menu(menu_items);
		if (idx < 0)
		{
			perror("Error index handler\n");
			return -1;
		}
		if (handlers[idx](NULL))
		{
			perror("Error handling\n");
		}
	} while (idx >= 0);
	getchar();
	return 0;
}