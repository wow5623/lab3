#define _CRT_SECURE_NO_WARNINGS
#include "2.h"

int task5(double e)
{
	int i = 0;
	while (i > -1)
	{
		double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		if (fabs(a) <= e && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	}
}