// Matura19.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"

#include <iostream>
#include <fstream>

#include "Zadanie1.h"
#include "Zadanie41.h"
#include "Zadanie42.h"
#include "Zadanie43.h"

#define Zadanie43

using namespace std;

int main()
{

#ifdef Zadanie1
	
	int n = 10;
	int A[] = { 3,3,5,9,2,4,8,2,10,12 };
	cout << "Zadanie 1.1" << endl;
	cout << "V1 O(n) = log n: " << S1(A, n) << endl;
	cout << "V2 O(n) = log n: " << S2(A, n) << endl;
	cout << "V3 O(n) = log n: " << S3(A, 0, n-1) << " - rekurencja"<< endl;


#elif defined Zadanie2

	cout << "2" << endl;

#elif defined Zadanie41

	cout << "Zadanie 4.1." << endl;
	ifstream liczby;

	liczby.open("../Dane_PR2/liczby.txt", std::ifstream::in);
	int x;
	int ile = 0;
	while (liczby.good())
	{
		liczby >> x;
		if (isPot3(x))
		{
			cout << x << ", ";
			ile++;
		}
	}

	cout << endl << "Odpowiedz: " << ile << " liczb jest potega 3" << endl;
	   
#elif defined Zadanie42

	cout << "Zadanie 4.2." << endl;
	ifstream liczby;

	liczby.open("../Dane_PR2/liczby.txt", std::ifstream::in);
	int x;

	while (liczby.good())
	{
		liczby >> x;
		if (isSum(x)) cout << x << endl;
		
	}

#elif defined Zadanie43

	cout << "Zadanie 4.3." << endl;
	ifstream liczby;

	liczby.open("../Dane_PR2/liczby.txt", std::ifstream::in);
	int t[500];
	int i = 0;
	while (liczby.good())
	{
		liczby >> t[i++];
	}
	int n;
	int max = 0;
	int maxi = i;
	int maxnwd;
	int maxnwd2;
	for (int i = 0; i < 499; i++)
	{
		n = nwd(t[i], t[i + 1]);
		if (n > 1)
		{
			maxnwd = n;
			for (int j = 2; i + j < 500; j++)
			{
				n = nwd(n, t[i + j]);
				if (n > 1) maxnwd = n;
				if (n == 1)
				{
					if (j > max)
					{
						max = j;
						maxi = i;
						maxnwd2 = maxnwd;
					}
					break;
				}
			}
		}
	}

	cout << maxi << " " << max << " "<<maxnwd2<<endl;
	
#endif
}
