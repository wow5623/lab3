#define _CRT_SECURE_NO_WARNINGS
#include "1.h"
int m = -1;

int task4(double e)
{
	for (int i = 0; ++i;)
	{
		double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		if (fabs(a) <= e)
		{
			m = i + 1;
				break;
		}
	}
	return(m);
}