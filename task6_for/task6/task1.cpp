#define _CRT_SECURE_NO_WARNINGS
#include "1.h"

double task1(int n)
{
	double f = 0.0;
	for (int i = 0; i < n; ++i)
	{
		double a = pow(-1, i)*(1 - ((2*i - 1) / (2*(i+1))));
		f += a;
	}
	return f;
}
