#pragma once

unsigned long silnia(int n)
{
	unsigned long s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}

bool isSum(int n)
{
	int cpy = n;
	int suma = 0;
	do 
	{
		suma += silnia(cpy % 10);
		cpy /= 10;

	} while (cpy);
	if (suma == n) return true;
	return false;
}
