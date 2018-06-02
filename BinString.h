#pragma once

class BinString : public Factory
{
public:
	BinString() { value = ""; }
	BinString(string dec) { value = dec; };
};