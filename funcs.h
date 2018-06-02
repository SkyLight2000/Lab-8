#pragma once

#include "Factory.h"
#include "SymbString.h"
#include "BinString.h"

typedef int(*handler_t)(void*);
int menu(const char*[]);
int tab_handler1(void*);
int tab_handler2(void*);
int tab_handler3(void*);
int tab_handler4(void*);
int tab_handler5(void*);
int tab_handler6(void*);
int tab_handler7(void*);
int tab_handler8(void*);
int create_symb();
int create_bin();
int del_symb();
int del_bin();
int show_oct();
int show_dec();
int show_hex();
int exit();