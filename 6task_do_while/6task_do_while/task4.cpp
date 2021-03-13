#define _CRT_SECURE_NO_WARNINGS
#include "3.h"
int task4(double e)
{
	int m = -1;
	int i = 0;
	do
	{
		double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		if (fabs(a) <= e)
		{
			m = i + 1;
			break;
		}
		++i;
	} 
	while (i > -1);
	return(m);
}
