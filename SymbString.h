#pragma once

class SymbString : public Factory
{
public:
	SymbString() { value = ""; }
	SymbString(string sym) { value = sym; };
};