#define _CRT_SECURE_NO_WARNINGS		//strtok() 보안 경고
#include <stdio.h>
#include <string.h>		//strtok()
#include <stdlib.h>		//srand(), rand()
#include <time.h>		//time()

/*
	strtok(문자열, 구분기호) - (, :, " ")
	문자열을 구분기호로 구분해서 배열로 반환해 줌
	- 배열을 사용
	- 랜덤하게 요소를 추출
	- 외부파일 문자열 -> 배열로 사용
*/
int main()
{
	char words[] = "ant bear chicken pig";
	char* wordList[4];	//분리된 단어 저장용 배열
	int idxOfWords = 0;	//배열의 인덱스
	char* ptr;


	ptr = strtok(words, " ");	//words를 공백문자로 구분해서 ptr에 저장(주소)
	while (ptr != NULL)
	{
		wordList[idxOfWords++] = ptr;	//wordList[0] = ant;
		ptr = strtok(NULL, " ");
	}
	//printf("%s\n", wordList[0]);	//ant
	//printf("%s\n", wordList[1]);	//bear

	/*for (int i = 0; i < 4; i++)
	{
		printf("%s\n", wordList[i]);
	}*/

	//랜덤하게 단어 추출
	srand(time(NULL));

	int rndIdx = rand() % idxOfWords;	//난수 발생(0 ~ 3)
	printf("%s\n", wordList[rndIdx]);
	
	//char* words2[] = { "ant", "bear","chiken", "pig" };
	//printf("%s\n", words);
	//printf("%s\n", words2[0]);	//ant
	//printf("%s\n", words2[1]);	//bear

	return 0;
}