#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
using namespace std;

class CStudent : public CCzlowiek
{

public:
	int m_ocena;
	string m_data;

	CCzlowiek* degraduj();
	string getTyp() const { return "student"; }
	zawod getTyp2() const { return student; }


	CStudent();
	
	CStudent(string imie, string nazwisko, string pesel, string mail, string tel, string data, int ocena);

	CStudent(string imie, string nazwisko, string pesel, string mail, string tel);
	
	~CStudent();



};


