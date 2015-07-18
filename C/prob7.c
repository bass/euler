#include <stdio.h>

int main (void)
{
	int n = 10001, i, count, c = 2;

	for ( count = 0 ; count < n ; ) {
		for ( i = 2 ; i <= c - 1 ; ++i ) {
			if ( c % i == 0 )
				break;
		}
		if ( i == c ) {
			++count;
		}
		++c;
	}

	printf ("%i\n", c - 1);

	return 0;
}
