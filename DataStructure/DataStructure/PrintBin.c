#include <stdio.h>

int printBin(int a) {
	if (a == 0 || a == 1)	
		printf("%d", a);
	else {
		printBin(a / 2);
		printf("%d", a % 2);
	}
}
/*
	a=11 -> printBin5	1
	a=5  -> printBin2	1
	a=2  -> printBin1	0
	a=1  ->				1
	1011
*/

int main()
{
	int x = 11;
	printBin(x);

	return 0;
}