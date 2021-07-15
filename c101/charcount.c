#include <stdio.h>
/* character count using only getchar */
main()
{
	long nc;

	nc = 0;		
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

