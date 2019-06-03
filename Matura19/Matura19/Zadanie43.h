#pragma once

int nwd(int a, int b)
{
	int p;

	while (b != 0)
	{
		p = b;
		b = a % b;
		a = p;
	}

	return a;
}

int nwd(int a, int b, int c)
{
	return nwd(nwd(a, b), c);
}