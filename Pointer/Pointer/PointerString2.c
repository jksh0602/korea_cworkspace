#include <stdio.h>
/*
	문자열 배열 포인터로 단어 저장하기
*/
int main()
{
	//char word[][6] = {"cow", "dog", "horse"};

	char* word[] = { "cow","dog","horse" };

	/*printf("%s\n", word[0]);
	printf("%s\n", word[1]);
	printf("%s\n", word[2]);*/

	int size = sizeof(word) / sizeof(word[0]);		//각각의 요소 포인터이므로 8byte임
	printf("%d %d\n", sizeof(word), sizeof(word[0]));
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", word[i]);
	}

	return 0;
}