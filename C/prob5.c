/* alex $ ./prob5
   232792560
   real 0m3.843s
   user 0m3.799s
   sys  0m0.008s */

#include <stdio.h>

int main (void)
{
	int i, n = 20, counter;

	while(1)
	{
		counter = 0;

		for ( i = 2; i <= 20; ++i )
		{
			if ( n % i == 0 )
				++counter;
			else
				break;
		}

		if ( counter == 19)
		{
			printf ("%i\n", n);
			break;
		}

		++n;
		continue;
	}

	return 0;
}
