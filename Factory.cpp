#include "stdafx.h"
#include "Factory.h"

long Factory::ShowOct() {
	char a[30];
	_itoa(atoi(value.c_str()), a, 8);
	return atoi(a);
}

long Factory::ShowDec() {
	char a[30];
	_itoa(atoi(value.c_str()), a, 10);
	return atoi(a);
}

string Factory::ShowHex() {
	char a[30];
	_itoa(atoi(value.c_str()), a, 16);
	return (const char*)_strupr(a);
}