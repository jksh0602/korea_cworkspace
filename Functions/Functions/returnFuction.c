#include <stdio.h>

//return이 있는 함수
//제곱수를 계산하는 함수 정의
int square(int x)
{
	return x * x;
}

//절대값을 계산하는 함수 정의
int myAbs(int x)
{
	//x가 음수와 양수일때 구분
	if (x < 0) { 
		return -x; 
	}
	else //x > 0
	{
		return x; 
	}
}

//두 수를 더하는 함수 정의
double add(double x, double y)
{
	return x + y;
}

int main()
{
	//함수 호출
	int value1, value2;
	double value3;

	//square() 함수 호출
	value1 = square(3);

	//myAbs() 호출
	value2 = myAbs(-5);

	//add()호출
	value3 = add(3.45 , 4.74);

	printf("%d \n%d \n%.2f \n", value1, value2, value3);


	return 0;
}