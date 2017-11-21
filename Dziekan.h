#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Pracownik.h"
#include "Nauczyciel.h"
#include "Student.h"
using namespace std;

class CDziekan : public CPracownik
{


public:

	void zwolnijKogos(int dl_tabeli, CCzlowiek* pLudz[]);
	CNauczyciel* awansujNaNauczyciela(int dl_tabeli, CCzlowiek* pLudz[]);
	CStudent* awansujNaStudenta(int dl_tabeli, CCzlowiek* pLudz[]);

	string getTyp() const { return "dziekan"; }
	zawod getTyp2() const { return dziekan; }


	CDziekan() 
	{

	}


	~CDziekan()
	{

	}

};