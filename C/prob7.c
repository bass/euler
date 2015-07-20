/* alex $ ./prob7
   104743
   real 0m2.361s
   user 0m2.171s
   sys  0m0.007s */

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
