#include <stdio.h>

int main ( void )
{
	int a = 1, b = 2, temp, sum = 0;
	
	while ( b <= 4000000 ) {

		if ( b % 2 == 0 ) {
			sum += b;
		}

		temp = a;
		a = b;
		b += temp;
	}

	printf ("%i\n", sum);
}
