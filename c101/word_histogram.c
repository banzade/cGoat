#include <stdio.h>
/* program to print a histogram of the lengths of words in its input */

//feel the beauty of the code, code is based on a solution by [octavian]

// provide space after every word input, the word without spaces are not counted.
main() 
{
	int c, i,j, wcount;
	int word_hist[10]; //10 letter words max
	
	wcount = 0;

	for (i =0; i <= 9; ++i)
		word_hist[i] = 0;

	while ((c = getchar()) != EOF)
		if (c != '\t' && c != '\n' && c != ' ')
			++wcount;

		else
		{
			++word_hist[wcount];
			wcount = 0;
		}

	printf("\n");
	
	for ( i = 0; i <= 9; ++i)
	{
		printf("%d",i);
		for (j =1; j <= word_hist[i]; ++j)
			printf("*");
		printf("\n");
	}
}	

