#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class CStudent;
class CNauczyciel;
class CPracownik;

class CCzlowiek
{

protected:
	string m_imie;
	string m_nazwisko;
	string m_pesel;
	string m_mail;
	string m_tel;

public:
	bool m_chceStudiowac = 0;
	bool m_chcePracowac = 0;


	enum zawod {
		czlowiek,
		student,
		pracownik,
		nauczyciel,
		dziekan
	};

	void aplikujStudent();
	void aplikujNauczyciel();
	CStudent* awansStudent();
    CNauczyciel* awansNauczyciel();
	virtual CCzlowiek* degraduj() { return this; }
		

	void setImie(string imie) { m_imie = imie; }
	void setNazwisko(string nazwisko) { m_nazwisko = nazwisko; }
	void setPesel(string pesel) { m_pesel = pesel; }
	void setMail(string mail) { m_mail = mail; }
	void setTel(string tel) { m_tel = tel; }

	string getImie() { return m_imie; }
	string getNazwisko() { return m_nazwisko; }
	string getPesel() { return m_pesel; }
	string getMail() { return m_mail; }
	string getTel() { return m_tel; }
	virtual string getTyp() const { return "czlowiek"; }
	virtual zawod getTyp2() const { return czlowiek; }


	

	CCzlowiek()
	{
		m_imie="";
		m_nazwisko="";
		m_pesel="";
		m_mail="";
		m_tel="";

	}

	CCzlowiek(string imie, string nazwisko, string pesel, string mail, string tel)
	{
		m_imie=imie;
		m_nazwisko=nazwisko;
		m_pesel=pesel;
		m_mail=mail;
		m_tel=tel;
	}

	virtual ~CCzlowiek()
	{

	}


};


