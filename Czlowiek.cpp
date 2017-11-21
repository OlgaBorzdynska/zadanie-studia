#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Nauczyciel.h"
#include "Student.h"
#include "Pracownik.h"
#include "Dziekan.h"

using namespace std;

void CCzlowiek::aplikujStudent()
{
	this->m_chceStudiowac = 1;
	cout << "Dziekan rozpatrzy twoja aplikacje." << endl;
	system("pause");
}

void CCzlowiek::aplikujNauczyciel()
{
	this->m_chcePracowac = 1;
	cout << "Dziekan rozpatrzy twoja aplikacje." << endl;
	system("pause");
}

CStudent* CCzlowiek::awansStudent()
{
	CStudent* czlek = new CStudent(this->m_imie, this->m_nazwisko, this->m_pesel, this->m_mail, this->m_tel);
	czlek->m_chceStudiowac = 0;
	delete this;
	return czlek;
}

CNauczyciel* CCzlowiek::awansNauczyciel()
{
	CNauczyciel* czlek = new CNauczyciel(this->m_imie, this->m_nazwisko, this->m_pesel, this->m_mail, this->m_tel);
	czlek->m_chcePracowac = 0;
	delete this;
	return czlek;
}


