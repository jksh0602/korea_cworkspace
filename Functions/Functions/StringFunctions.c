#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strcpy(), strlen(), strcmp()

/*
	문자열 복사 - strcpy()
	문자열의 개수 - strlen()
*/
int main()
{
	char msg1[] = "Good Luck";
	char msg2[20];
	char msg3[20];

	printf("strlen \"Good Luck\" = %d\n", strlen(msg1));	//문자열의 개수 - 9
	printf("sizeof \"Good Luck\" = %d\n", sizeof(msg1));	//메모리의 크기 10 - '\0'(NULL)

	//문자열 복사
	strcpy(msg2, msg1);
	printf("msg2 = %s\n", msg2);

	strcpy(msg2, "Have a good time");
	printf("msg2.1 = %s\n", msg2);

	//문자열 비교
	char greet1[] = "Hello";
	char greet2[] = "Hello";
	int result;

	result = strcmp(greet1, greet2);
	printf("result = %d\n", result);		//0 - 일치, 1 - 불일치

	if (result == 0)
	{
		printf("문자열이 일치합니다.\n");
	}
	else
	{
		printf("문자열이 일치하지 않습니다.\n");
	}

	return 0;
}