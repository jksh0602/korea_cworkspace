#include <stdio.h>

int square(int x)
{
	return x * x;
}

float triangle(int size, int height)
{
	//강제형변환 해야 실수로 반환됨
	float area = (float)(size * height) / 2;		//2.0으로 하면 float생략가능
	return area;
}

int main()
{
	int rectArea;
	float triArea;

	//정사각형 넓이 계산
	rectArea = square(4);

	//삼각형 넓이 계산
	triArea = triangle(3,5);

	printf("정사각형의 넓이 : %dcm\n", rectArea);
	printf("삼각형의 넓이 : %.1fcm\n", triArea);

	return 0;
}