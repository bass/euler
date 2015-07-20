/* alex $ ./prob1
   233168
   real 0m0.007s
   user 0m0.003s
   sys  0m0.003s */

#include <stdio.h>

int main (void) 
{
	int u, v, w, sum = 0, sub = 0;

	for ( u = 3; u < 1000; u += 3 )		
		sum += u;
	for ( v = 5; v < 1000; v += 5 )
		sum += v;
	for ( w = 15; w < 1000; w += 15 )
		sub += w;

	printf ("%i\n", sum - sub);
}
