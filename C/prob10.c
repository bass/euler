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
