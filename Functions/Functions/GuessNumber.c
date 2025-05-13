#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	숫자 추측 게임
	- 컴퓨터가 난수를 생성
	- 사용자가 예측한 수를입력
	1. 추측한 수 = 난수, 정답
	2. 추측한 수 > 난수, 크다
	3. 추측한 수 < 난수, 작다
*/

int main()
{
	srand(time(NULL));
	int randNum;
	int guessNum;
	int count = 5;

	randNum = rand() % 50 + 1;
	//printf("컴퓨터의 수: %d\n", randNum);

	while (count > 0)
	{
		printf("남은 횟수 %d\n", count--);
		printf("1 ~ 50 입력: ");
		scanf_s("%d", &guessNum);

		if (guessNum == randNum)
		{
			printf("정답입니다.\n");
			printf("%d", randNum);
			break;
		}
		else if (guessNum > randNum)
		{
			printf("큽니다.\n");
		}
		else
		{
			printf("작습니다.\n");
		}

		if (count == 0)
		{
			printf("기회를 모두 사용하였습니다. 정답은 %d입니다.\n", randNum);
		}
	}
	return 0;
}