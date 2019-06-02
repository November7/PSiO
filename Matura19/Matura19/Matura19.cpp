// Matura19.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

using namespace std;

// Deklaracje funkcji:

int S1(int[], int);
int S2(int[], int);
int S3(int[], int, int);


int main()
{
	int n = 10;
	int A[] = { 3,3,5,9,2,4,8,2,10,12 };
	cout << "Zadanie 1.1" << endl;
	cout << "V1 O(n) = log n: " << S1(A, n) << endl;
	cout << "V2 O(n) = log n: " << S2(A, n) << endl;
	cout << "V3 O(n) = log n: " << S3(A, 0, n-1) << " - rekurencja"<< endl;
}


/* Wersja 1 

	- Złożoność obliczeniowa liniowa: O(n) = n 
	- Wersja iteracyjna
	- Użycie: S1(tablica, rozmiar);

*/

int S1(int A[], int n)
{
	for (int i = 1; i < n; i++)  // pierwsza liczba zawsze jest nieparzysta
	{
		if (A[i] % 2 == 0) return A[i];
	}
	return 0; //sytuacja niemożliwa - wyklucza ją treść zadania!
}

/* Wersja 2 
	
	- Złożoność logarytmiczna: O(n) = log n,
	- Wersja iteracyjna
	- Użycie: S2(tablica, rozmiar);

*/

int S2(int A[], int n)
{
	int p = 0;
	int k = n - 1;
	while (p < k)
	{
		int s = (p + k) / 2;
		if (A[s] % 2 == 0)
		{
			k = s;
		}
		else p = s + 1;
	}

	return A[p];
}

/* Wersja 3

	- Złożoność logarytmiczna: O(n) = log n,
	- Wersja rekurencyjna
	- Użycie: S3(tablica, początek_zbioru, koniec_zbioru);

*/
int S3(int A[], int p, int k)
{

	if (p == k - 1)
	{
		if (A[p] % 2 == 0) return A[p];
		else return A[k];
	}
	else if (p == k) return A[p];
	else
	{
		int s = (p + k) / 2;


		if (A[s] % 2 == 0)
		{
			S3(A, p, s);
		}
		else
		{
			S3(A, s, k);
		}
	}
}