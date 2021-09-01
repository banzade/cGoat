#include <stdio.h>
#define MAXLINE 10000
// to print the longest line

int inputline (char line[], int maxline);
void copy (char to[], char from[]);
main() {
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = inputline(line, MAXLINE)) > 0)
        if (len > max)  {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("\n%s\n", longest);
    return 0;
}

/* getline -  read a line into s and return length */
int inputline( char s[], int lim) {
    int c, i;

    for ( i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i )
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


/* copy 'from' into 'to' */
void copy (char to[], char from[]) {
    int i;

    i = 0;
    while ( (to[i] = from[i])!= '\0')
        ++i;
}

