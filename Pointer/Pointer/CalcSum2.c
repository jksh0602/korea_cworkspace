#include <stdio.h>

/*
	x부터 y까지의 합계
	1. 출력형태
		1+2+3+4+5=15
	2. calcSum2(1, 5);	//x > y
	   calcSum2(5, 1);	//x < y
*/

void swap(int* x, int* y);
void calcSum2(int, int);

int main()
{
	calcSum2(1, 5);	//호출
	calcSum2(5, 1);

	return 0;
}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void calcSum2(int x, int y) {
	
	int sum, i;

	//첫번째 수가 두번째수가 클때
	if (x > y)
	{
		swap(&x, &y);
	}

	printf("%d", x);
	sum = x;	//sum = 1

	for (i = x + 1; i <= y; i++)
	{
		printf("+%d", i);
		sum += i;
	}
	printf("=%d\n", sum);
}