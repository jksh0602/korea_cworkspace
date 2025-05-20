#include <stdio.h>

//선언부 매개변수는 자료형만 사용도 가능
void CallByVal(int, int);
void CallByRef(int*, int*);

int main()
{
	int x = 1, y = 2;
	int temp;


	printf("값에 의한 호출\n");
	CallByVal(x, y);
	printf("x = %d, y = %d\n", x, y);

	printf("참조에 의한 호출\n");
	CallByRef(&x, &y);
	printf("x = %d, y = %d\n", x, y);

	return 0;
}

void CallByVal(int a, int b)
{
	int temp;
	//교환
	temp = a;
	a = b;
	b = temp;
	//a, b와 x, y는 서로 다름
	//a, b는 이곳에서 소멸
}

void CallByRef(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}