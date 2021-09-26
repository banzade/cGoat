#include <stdio.h>
int main(){
	int a=8;
	int b=89;
	int c=899;
	
	// using ternary operator
	int large = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	
	printf("%d\n", large);
}
