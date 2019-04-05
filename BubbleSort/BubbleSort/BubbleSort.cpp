// BubbleSort.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int Pobierz()
{
	int n;
	for (int i = 0; i < 3; i++)
	{
		system("cls");
		cout << "Podaj rozmiar tablicy [1 - 1000]";
		if (i) cout << "!!!";
		cout << endl;
		cin >> n;
		if (n > 0 && n <= 1000) return n;
	}
	exit(1);
}

void Wypisz(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << p[i] << ", ";
	cout << endl;
}

int Sortuj(int* p, int n, int d = 1)
{
	int ile = 0;
	int z;
	for (int j = 0; j < n - 1; j++)
	{
		z = 0;
		for (int i = 0; i < n - 1 - j; i++)
		{
			ile++;
			if (p[i] > p[i + 1])
			{
				int x = p[i];
				p[i] = p[i + 1];
				p[i + 1] = x;
				z = 1;
			}
		}
		if (!z) break;
	}
	return ile;
}

int main()
{
	//int n = Pobierz();
	int n = 10;
	//int *p = new int[n];
	int p[] = { 10,9,8,7,6,5,4,3,2,1 };
	srand(time(NULL));

	/*for(int i=0;i<n;i++)
		p[i] = rand()%100;*/

	Wypisz(p, n);

	int i = Sortuj(p, n);

	Wypisz(p, n);

	cout << "Posortowano po " << i << " iteracjach" << endl;

	return 0;
}
