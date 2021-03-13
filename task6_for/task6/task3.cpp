#define _CRT_SECURE_NO_WARNINGS
#include "1.h"
double a;
void task3(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - ((2 * i - 1) / (2 * (i + 1))));
		if ((i + 1) % k == 0)
			continue;
		printf("%f", a);
	};
}