#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
using namespace std;

class CPracownik : public CCzlowiek
{

public:

	CCzlowiek* degraduj();
	string getTyp() const { return "pracownik"; }
	zawod getTyp2() const { return pracownik; }
	CPracownik(string imie, string nazwisko, string pesel, string mail, string tel);
	CPracownik();




};

