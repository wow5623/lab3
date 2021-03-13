#define _CRT_SECURE_NO_WARNINGS
#include "2.h"

double task2(double e)
{
	double a = e + 1.0;
	double f = 0.0;
	int i = 0;
		while (fabs(a) > e)
		{
			a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
			f += a;
			++i;
		}  
	return (f);
}