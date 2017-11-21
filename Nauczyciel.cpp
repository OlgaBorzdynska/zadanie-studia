#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Pracownik.h"
#include "Nauczyciel.h"
#include "Student.h"
using namespace std;

void CNauczyciel::zmienOcene(int dl_tabeli, CCzlowiek* pLudz[])
{
	int stud, ocena, index;
	cout << "Wybierz studenta: " << endl;

	for (int j = 0; j < dl_tabeli; j++) {
		index = pLudz[j]->getTyp2();
		if (index == 1) {
			cout << j + 1 << ". " << pLudz[j]->getImie() << " " << pLudz[j]->getNazwisko() << endl;
		}
	}
	cin >> stud;
	cout << "Podaj ocene: " << endl;
	cin >> ocena;
	static_cast<CStudent*>(pLudz[stud])->m_ocena = ocena;


}



CNauczyciel::CNauczyciel(string imie, string nazwisko, string pesel, string mail, string tel)
{
	m_imie = imie;
	m_nazwisko = nazwisko;
	m_pesel = pesel;
	m_mail = mail;
	m_tel = tel;
}


CNauczyciel::CNauczyciel()
{

}

CNauczyciel::~CNauczyciel()
{

}
