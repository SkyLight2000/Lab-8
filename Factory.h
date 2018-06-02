#pragma once

class Factory {
protected:
	string value;
public:
	Factory() { value = ""; }
	long ShowOct();
	long ShowDec();
	string ShowHex();
private:
	Factory(string a) { value = a; }
};