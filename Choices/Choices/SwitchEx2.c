#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
/*
	case문 동시에 사용하기
*/
int main() 
{
	int month;
	printf("달 입력 : ");
	scanf_s("%d", &month);
	int day;

	switch (month)
	{
	case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 12:
		day = 31;
		break;
	case 4:	case 6:	case 9:	case 11:
		day = 30;
		break;
	default:
		day = 28;
		break;
	}
	printf("%d일 존재\n", day);


	return 0;
}