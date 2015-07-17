/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int main (void) {
	int u, v, w, sum = 0, sub = 0;

	for ( u = 3; u < 1000; u += 3 )		
		sum += u;
	for ( v = 5; v < 1000; v += 5 )
		sum += v;
	for ( w = 15; w < 1000; w += 15 )
		sub += w;

	printf ("%i\n", sum - sub);
}
