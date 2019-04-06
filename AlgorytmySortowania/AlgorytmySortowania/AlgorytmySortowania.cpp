// BubbleSort.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int Pobierz();
void Wypisz(int*, int);
int Bubble(int*, int, int = 1);

int main()
{
	int n = Pobierz();
	int *p = new int[n];
	srand(time(NULL));

	for(int i=0;i<n;i++)
		p[i] = rand()%100;

	Wypisz(p, n);
	int i = Bubble(p, n);
	Wypisz(p, n);
	cout << "Posortowano po " << i << " iteracjach" << endl;
	return 0;
}

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

int Bubble(int* p, int n, int d)
{
	int ile = 0, z, j = 0;

	do
	{
		z = 0;
		for (int i = 0; i < n - 1 - j; i++)
		{
			ile++;
			if (d*p[i] > d*p[i + 1])
			{
				int x = p[i];
				p[i] = p[i + 1];
				p[i + 1] = x;
				z = 1;
			}
		}
		j++;

	} while (z);

	return ile;
}