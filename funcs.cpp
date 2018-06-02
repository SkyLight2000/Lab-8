#include "stdafx.h"
#include "funcs.h"

SymbString symb;
BinString bins;
string sym, bin;

int menu(const char* menu_items[])
{
	int n;
	for (n = 0; menu_items[n]; ++n)
	{
		printf("\t[%d]. %s\n", n, menu_items[n]);
	}
	int i = -1;
	printf("\tChoice: ");
	if (scanf("%d", &i) == 1)
	{
		if (i >= 0 && i < n)
		{
			return i;
		}
	}
	return i;
}

int tab_handler1(void* p) {
	return create_symb();
}

int tab_handler2(void* p) {
	return create_bin();
}

int tab_handler3(void* p) {
	return show_oct();
}

int tab_handler4(void* p) {
	return show_dec();
}

int tab_handler5(void* p) {
	return show_hex();
}

int tab_handler6(void* p) {
	return del_symb();
}

int tab_handler7(void* p) {
	return del_bin();
}

int tab_handler8(void* p) {
	return exit();
}

int create_symb() {
	cout << "Введите значение: " << endl;
	cin >> sym;
	symb = SymbString(sym);
	cout << "Объект создан: " << sym << endl;
	return 0;
}

int create_bin() {
	cout << "Введите значение: " << endl;
	cin >> bin;
	bins = BinString(bin);
	char a[30];
	_itoa(atoi(bin.c_str()), a, 2);
	cout << "Объект создан: " << atoi(a) << endl;
	return 0;
}

int del_symb() {
	cout << endl << endl;
	symb = SymbString("");
	cout << "Объект удален." << endl;
	return 0;
}

int del_bin() {
	cout << endl << endl;
	bins = BinString("");
	cout << "Объект удален." << endl;
	return 0;
}

int show_oct() {
	cout << "Восьмиричное представление:" << bins.ShowOct() << endl;
	return 0;
}

int show_dec() {
	cout << "Десятичное представление: " << bins.ShowDec() << endl;
	return 0;
}

int show_hex() {
	cout << "Шеснадцатиричное представление: " << bins.ShowHex() << endl;
	return 0;
}

int exit() {
	exit(EXIT_SUCCESS);
}