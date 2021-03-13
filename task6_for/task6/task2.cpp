#define _CRT_SECURE_NO_WARNINGS
#include "1.h"

double task2(double e)
{
	double a = e + 1.0;
	double f = 0.0;
	for (int i = 0; fabs(a) > 0; ++i)
	{
		a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		f += a;
	}
	return (f);
}