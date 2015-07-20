/* alex $ ./prob6
   25164150
   real 0m0.007s
   user 0m0.002s
   sys  0m0.003s */

#include <stdio.h>

int main (void)
{
	int i, sumOfSquares = 0, sum = 0;

	for ( i = 1; i <= 100; ++i )
	{
		sumOfSquares += i * i;
		sum += i;
	}

	printf ("%i\n", sum * sum - sumOfSquares);
}
