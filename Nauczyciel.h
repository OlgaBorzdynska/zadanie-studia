#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Pracownik.h"
using namespace std;

class CNauczyciel : public CPracownik
{

public:
	void zmienOcene(int dl_tabeli, CCzlowiek* pLudz[]);
	string getTyp() const { return "nauczyciel"; }
	zawod getTyp2() const { return nauczyciel; }

	CNauczyciel(string imie, string nazwisko, string pesel, string mail, string tel);

	CNauczyciel();


	~CNauczyciel();
};