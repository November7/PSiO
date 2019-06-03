#pragma once

int NWD(int a, int b)
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
void findNWD(int t[], int n)
{
	int length = 0;
	int start = 0;
	int c_nwd;
	int f_nwd;
	for (int i = 0 ; i < n-1 ; i++)
	{
		int nwd = NWD(t[i], t[i + 1]);
		if (nwd > 1)
		{
			c_nwd = nwd;
			for (int j = 2; i + j < 500; j++)
			{
				nwd = NWD(nwd, t[i + j]);
				if (nwd > 1) c_nwd = nwd;
				if (nwd == 1)
				{
					if (j > length)
					{
						length = j;
						start = i;
						f_nwd = c_nwd;
					}
					break;
				}
			}
		}
	}

	cout << start << " " << length << " " << f_nwd << endl;
}