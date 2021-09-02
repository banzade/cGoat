# include <stdio.h>
# define MAXLEN 1000
// reverse line
int getLine(char line[], int maxline);
void copyReverse(char line[], char rev_line[], int len_line);

int main()	{
	int len;
	char ln[MAXLEN];
	char ln_rev[MAXLEN];
	len = 0;

	while ((len = getLine(ln, MAXLEN)) > 0)	{
		copyReverse(ln, ln_rev, len);
	}
	printf("\n%s\n", ln_rev);
}

int getLine(char s[], int lim)	{
	int c, i;

	for (i=0; i < MAXLEN-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] =c;
	if (c == '\n')
		s[i] = '\0';
	return i;
}

void copyReverse (char line[], char rev_line[], int len_line)	{
	int i,j;
	j=0;

	for(i = len_line-1; i>=0 && i < MAXLEN-1; --i)	{
		rev_line[j] = line[i];
		++j;
	}
}
