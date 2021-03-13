#define _CRT_SECURE_NO_WARNINGS
#include "2.h"
int m = -1;
int task4(double e)
{
	int i = 0;
	while (i > -1)
	{
		double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		if (fabs(a) <= e)
		{
			m = i + 1;
			break;
		}
		++i;
	}
	return(m);
}