#pragma once

#include <iostream>

using namespace std;


/* Wersja 1

	- Z³o¿onoœæ obliczeniowa liniowa: O(n) = n
	- Wersja iteracyjna
	- U¿ycie: S1(tablica, rozmiar);

*/

int S1(int A[], int n)
{
	for (int i = 1; i < n; i++)  // pierwsza liczba zawsze jest nieparzysta
	{
		if (A[i] % 2 == 0) return A[i];
	}
	return 0; //sytuacja niemo¿liwa - wyklucza j¹ treœæ zadania!
}

/* Wersja 2

	- Z³o¿onoœæ logarytmiczna: O(n) = log n,
	- Wersja iteracyjna
	- U¿ycie: S2(tablica, rozmiar);

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

	- Z³o¿onoœæ logarytmiczna: O(n) = log n,
	- Wersja rekurencyjna
	- U¿ycie: S3(tablica, pocz¹tek_zbioru, koniec_zbioru);

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