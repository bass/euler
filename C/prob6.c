#include <stdio.h>

int main (void)
{
	int i, sumOfSquares = 0, sum = 0;

	for ( i = 1; i <= 100; ++i ) {
		sumOfSquares += i * i;
		sum += i;
	}

	printf ("%i\n", sum * sum - sumOfSquares);
}
