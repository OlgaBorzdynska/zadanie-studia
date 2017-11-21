#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Pracownik.h"
using namespace std;


CPracownik::CPracownik(string imie, string nazwisko, string pesel, string mail, string tel) : CCzlowiek(imie, nazwisko, pesel, mail, tel)
{

}

CPracownik::CPracownik()
{

}

CCzlowiek* CPracownik::degraduj()
{
	CCzlowiek* czlek = new CCzlowiek(this->m_imie, this->m_nazwisko, this->m_pesel, this->m_mail, this->m_tel);
	delete this;
	return czlek;
}