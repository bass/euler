/* alex $ ./problem10
   142913828922
   real 0m0.148s
   user 0m0.132s
   sys  0m0.009s */

#include <stdio.h>

int main (void)
{
	int n = 2000000, i, P[n];
	
	for ( i = 0; i < n; ++i ) 
	{
		P[i] = 1;
	}

	int j;
	i = 2;

	while ( i < n )
	{
		if ( P[i] == 0 )
		{
			++i;
			continue;
		}
		
		for ( j = 2; i * j < n; ++j ) 
			P[i * j] = 0;
		++i;
	}

	long int sum = 0;

	for ( i = 2; i < n; ++i )
	{
		if ( P[i] == 1 )
			sum += i;
	}

	printf ("%li\n", sum);

	return 0;
}
