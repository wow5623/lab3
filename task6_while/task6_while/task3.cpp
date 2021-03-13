#define _CRT_SECURE_NO_WARNINGS
#include "2.h"

void task3(int n, int k)
{
	int i = 0;
		while (i < n)
		{
			double a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
			if ((i + 1) % k == 0)
			{
				++i;
				continue;
			}
			++i;
			printf("%f", a);
		}
		
}