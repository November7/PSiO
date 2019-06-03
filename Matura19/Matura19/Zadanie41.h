#pragma once


bool isPot3(int n)
{
	for (int l = 1; l < 100000; l *= 3)
	{
		if (l == n) return true;
	}
	return false;
}
