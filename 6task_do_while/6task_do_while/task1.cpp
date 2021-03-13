#define _CRT_SECURE_NO_WARNINGS
#include "3.h"

double task1(int n)
{
	double f = 0.0;
	int i = 0;
	do
	{
		double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		f += a;
		++i;
	} while (i < n);
	return f;
}
