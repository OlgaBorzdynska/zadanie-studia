// Studia.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Student.h"
#include "Pracownik.h"
#include "Nauczyciel.h"
#include "Dziekan.h"
using namespace std;



int main()
{

	int a=0, b=0;
	

	//tworzenie początkowych obiektów

	int dl_tabeli = 8;
	CCzlowiek* pLudz[20];		//zalozenie, ze bedzie max 20 obiektów
	for (int i = 0; i < 20; i++)
	{
		pLudz[i] = NULL;
	}

	pLudz[0] = new CCzlowiek;
	pLudz[0]->setImie("Kasia");
	pLudz[0]->setNazwisko("Wozniak");

	pLudz[1] = new CCzlowiek;
	pLudz[1]->setImie("Ania");
	pLudz[1]->setNazwisko("Kowalska");

	pLudz[2] = new CCzlowiek;
	pLudz[2]->setImie("Dorota");
	pLudz[2]->setNazwisko("Socha");

	pLudz[3] = new CStudent;
	pLudz[3]->setImie("Antek");
	pLudz[3]->setNazwisko("Malinowski");

	pLudz[4] = new CStudent;
	pLudz[4]->setImie("Marcin");
	pLudz[4]->setNazwisko("Bogucki");

	pLudz[5] = new CNauczyciel;
	pLudz[5]->setImie("Grzegorz");
	pLudz[5]->setNazwisko("Matacki");

	pLudz[6] = new CNauczyciel;
	pLudz[6]->setImie("Roman");
	pLudz[6]->setNazwisko("Giertych");

	pLudz[7] = new CDziekan;
	pLudz[7]->setImie("Marian");
	pLudz[7]->setNazwisko("Opania");


	//główna pętla programu

	do {

		cout << "W kogo chcesz sie wcielic? Wybierz numer:" << endl << endl;

		for (int i = 0; i < dl_tabeli; i++)
		{
			if (pLudz[i])
			{
				cout << i + 1 << ". " << pLudz[i]->getImie() << " " << pLudz[i]->getNazwisko() << ", "
					<< pLudz[i]->getTyp() << endl;
			}
		}

		cout << endl;
		cout << "100 - stworz nowego czlowieka" << endl;
		cout << "200 - koniec programu" << endl;
		cin >> a;

		if (a == 100)
		{
			string imie, nazwisko, pesel, mail, tel;
			int suma = 0;

			cout << "Podaj imie: "<<endl;
			cin >> imie;
			if (isupper(imie[0])) { suma++; }
			cout << "Podaj nazwisko: " << endl;
			cin >> nazwisko;
			if (isupper(nazwisko[0])) { suma++; }
			cout << "Podaj pesel: " << endl;
			cin >> pesel;
			if (pesel.length() == 11)
			{
				int control = 0;
				for (int i = 0; i < 11; i++)
				{
					if (isdigit(pesel[i])) { control++; }
				}
				if (control == 11) { suma++; }
			}
			cout << "Podaj mail: " << endl;
			cin >> mail;

			int control2 = 0;
			string malpa = "@.";

			for (int i = 0; i < mail.length(); i++)
			{
				if (mail[i] == malpa[0]) { control2++; }
				if (mail[i] == malpa[1]) { control2++; }
			}
			if (control2 == 2) { suma++; }
			cout << "Podaj numer telefonu: " << endl;
			cin >> tel;

			if (tel.length() == 9)
			{
				int control = 0;
				for (int i = 0; i < 9; i++)
				{
					if (isdigit(tel[i])) { control++; }
				}
				if (control == 9) { suma++; }
			}
			

			

			if (suma == 5)
			{

				pLudz[dl_tabeli] = new CCzlowiek(imie, nazwisko, pesel, mail, tel);
				dl_tabeli++;
			}
			else
			{
				cout << "Nieprawidłowe dane, dodanie czlowieka niepowiodlo sie." << endl;
				system("pause");
			}
		}

		else if (a == 200)
		{
			break;
		}

		else if ( (a>0) && (a < (dl_tabeli+1) ))
		{
			switch (pLudz[a - 1]->getTyp2())
			{
			case 0:			//czlowiek
				cout << "Wybierz funkcje:" << endl;
				cout << "1. Aplikuj na studia" << endl;
				cout << "2. Aplikuj na nauczyciela" << endl;
				cout << "3. Powrot do glownego menu" << endl;
				cin >> b;

				if (b == 1)
				{
					pLudz[a - 1]->aplikujStudent();
				}
				else if (b == 2)
				{
					pLudz[a - 1]->aplikujNauczyciel();
				}
				else
				{
					break;
				}
				break;

			case 1:		 //student
				cout << "Wybierz funkcje:" << endl;
				cout << "1. Rzuc studia" << endl;
				cout << "2. Powrot do glownego menu" << endl;
				cin >> b;

				if (b == 1)
				{
					pLudz[a - 1] = pLudz[a - 1]->degraduj();
				}
				else
				{
					break;
				}
				break;

			case 2:			//pracownik, ktorego nigdy nie mozna uzyc
				cout << "Wybierz funkcje:" << endl;
				cout << "1. Rzuc pracę" << endl;
				cout << "2. Powrot do glownego menu" << endl;
				cin >> b;

				if (b == 1)
				{
					pLudz[a - 1] = pLudz[a - 1]->degraduj();
				}
				else
				{
					break;
				}
				break;

			case 3:			//nauczyciel
				cout << "Wybierz funkcje:" << endl;
				cout << "1. Rzuc prace" << endl;
				cout << "2. Zmien ocene" << endl;
				cout << "3. Powrot do glownego menu" << endl;
				cin >> b;

				if (b == 1)
				{
					pLudz[a - 1] = pLudz[a - 1]->degraduj();
				}
				else if (b == 2)
				{
					static_cast<CNauczyciel*>(pLudz[a - 1])->zmienOcene(dl_tabeli, pLudz);
				}
				else
				{
					break;
				}
				break;

			case 4:			//dziekan
				cout << "Wybierz funkcje:" << endl;
				cout << "1. Zwolnij kogos" << endl;
				cout << "2. Awansuj kogos na studenta" << endl;
				cout << "3. Awansuj kogos na pracownika" << endl;
				cout << "4. Powrot do glownego menu" << endl;
				cin >> b;

				if (b == 1)
				{
					static_cast<CDziekan*>(pLudz[a - 1])->zwolnijKogos(dl_tabeli, pLudz);
				}
				else if (b == 2)
				{
					static_cast<CDziekan*>(pLudz[a - 1])->awansujNaStudenta(dl_tabeli, pLudz);
				}
				else if (b == 3)
				{
					static_cast<CDziekan*>(pLudz[a - 1])->awansujNaNauczyciela(dl_tabeli, pLudz);
				}
				else
				{
					break;
				}

				break;
			}

		}
		else
		{
			cout << "Nieprawidlowa wartosc" << endl;
			break;
		}

		system("cls");

	} while (a!=200);

	for (int i = 0; i < 20; i++)
	{
		if (pLudz[i])
			delete pLudz[i];		
	}

	system("pause");
    return 0;
} 

