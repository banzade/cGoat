#include <stdio.h>
/* copied from the book sec 1.5.4 wordcount */

#define IN 1
#define OUT 0

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc; //char count
		if (c == '\n')
			++nl; //line count
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw; //wordCounting here
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
