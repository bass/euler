#include <stdio.h>

int main (void)
{
	int i, k, largest = 0;
	for ( i = 100; i < 1000; ++i ) {
		for ( k = 100; k < 1000; ++k ) {
			int n = i * k, rem, a = 0;
			while ( n != 0 ) {
				rem = n % 10;
				n /= 10;
				a = a * 10 + rem;
			}
			if ( a == i * k && a > largest ) {
				largest = a;
			}
		}
	}
	
	printf ("%i\n", largest);
	return 0;
}
