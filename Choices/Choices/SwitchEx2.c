#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
/*
	case�� ���ÿ� ����ϱ�
*/
int main() 
{
	int month;
	printf("�� �Է� : ");
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
	printf("%d�� ����\n", day);


	return 0;
}