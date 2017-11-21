#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Student.h"
using namespace std;



CStudent::CStudent(string imie, string nazwisko, string pesel, string mail, string tel, string data, int ocena) : CCzlowiek(imie, nazwisko, pesel, mail, tel)
{
	m_data = data;
	m_ocena = ocena;
}

CStudent::CStudent(string imie, string nazwisko, string pesel, string mail, string tel)
{
	m_imie = imie;
	m_nazwisko = nazwisko;
	m_pesel = pesel;
	m_mail = mail;
	m_tel = tel;
	m_data = "";
	m_ocena = 0;
}

CStudent::CStudent()
{
	m_data = "";
	m_ocena = 0;
}

CStudent::~CStudent()
{

}

CCzlowiek* CStudent::degraduj()
{
	CCzlowiek* czlek = new CCzlowiek(this->m_imie, this->m_nazwisko, this->m_pesel, this->m_mail, this->m_tel);
	delete this;
	return czlek;
}



