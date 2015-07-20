/* alex $ ./prob3
   6857
   real 0m0.007s
   user 0m0.005s
   sys  0m0.001s */

#include <stdio.h>

int main ( void )
{
	long int n = 600851475143;
	int divisor = 2;

	while ( n > 1 )
	{
		if ( n % divisor == 0 ) 
		{
			n /= divisor;
			continue;
		}
		++divisor;
	}

	printf ("%i\n", divisor);

	return 0;
}
