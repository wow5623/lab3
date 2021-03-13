#define _CRT_SECURE_NO_WARNINGS
#include "3.h"

int task5(double e)
{
	int i = 0;
	do
	{
		double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		if (fabs(a) <= e && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	} while (i > -1);
}
