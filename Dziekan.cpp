#include "stdafx.h"
#include <iostream>
#include <string>
#include "Czlowiek.h"
#include "Pracownik.h"
#include "Dziekan.h"
using namespace std;



void CDziekan::zwolnijKogos(int dl_tabeli, CCzlowiek* pLudz[])
{

	cout << "Wybierz nieszczesnika: " << endl;
	int stud, index, check=0;
	for (int j = 0; j < dl_tabeli; j++) 
	{
		index = pLudz[j]->getTyp2();
		if ((index == 3)||(index==1))
		{
			cout << j + 1 << ". " << pLudz[j]->getImie() << " " << pLudz[j]->getNazwisko() << endl;
			check++;
		}
	}
	if (check == 0)
	{
		cout << "Wszystkich juz zwolniles!" << endl;
		system("pause");
	}
	else
	{
		cin >> stud;

		if (stud == 8)
		{
			cout << "Siebie nie mozesz zwolnic." << endl;
			system("pause");
		}
		else
		{
			pLudz[stud - 1] = pLudz[stud - 1]->degraduj();
		}
	}

}

CNauczyciel* CDziekan::awansujNaNauczyciela(int dl_tabeli, CCzlowiek* pLudz[])
{
	cout << "Kogo zatrudnisz jako nauczyciela: " << endl;
	int chetny, check = 0;
	CNauczyciel* oNowyNauczyciel = new CNauczyciel();

	for (int j = 0; j < dl_tabeli; j++)
	{
		if (pLudz[j]->m_chcePracowac)
		{
			cout << j + 1 << ". " << pLudz[j]->getImie() << " " << pLudz[j]->getNazwisko() << endl;
			check++;
		}
	}
	if (check == 0)
	{
		cout << "Nikt nie chce zostac nauczycielem." << endl;
		system("pause");
	}
	else
	{
		cin >> chetny;
		oNowyNauczyciel = pLudz[chetny - 1]->awansNauczyciel();
		pLudz[chetny - 1] = oNowyNauczyciel;
	}
	return oNowyNauczyciel;
}

CStudent* CDziekan::awansujNaStudenta(int dl_tabeli, CCzlowiek* pLudz[])
{
	cout << "Kogo przyjmiesz na studia: " << endl;
	int chetny, check = 0;
	CStudent* oNowyStudent = new CStudent();
	for (int j = 0; j < dl_tabeli; j++)
	{
		if (pLudz[j]->m_chceStudiowac)
		{
			cout << j + 1 << ". " << pLudz[j]->getImie() << " " << pLudz[j]->getNazwisko() << endl;
			check++;
		}
	}
	if (check == 0)
	{
		cout << "Nikt nie chce przyjsc na studia." << endl;
		system("pause");
	}
	else
	{
		cin >> chetny;
		oNowyStudent = pLudz[chetny - 1]->awansStudent();
		pLudz[chetny - 1] = oNowyStudent;
	}
	return oNowyStudent; 
}