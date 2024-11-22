#include "factorial.h"


//--Recursive function to calculate factorial---

unsigned long long factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

