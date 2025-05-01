#include <stdio.h>

int main()
{
	/*
		성적의 개수, 평균, 최대값, 최소값
	*/

	int score[5] = { 85,75,90,75,80 };		//성적
	int sum = 0;	//합계
	double avg;		//평균
	int min, max;		//최소

	//배열의 크기(개수) - count
	int count = sizeof(score) / sizeof(score[0]);	//20Byte / 4Byte = 5
	printf("배열의 크기: %d\n", count);

	//총점 구하기
	//score[0] + score[1] + score[2] + ...
	for (int i = 0; i < count; i++)
	{
		sum += score[i];		//sum = sum + score[i]
	}
	printf("총점: %d\n", sum);

	//평균 계산 = 합계 / 개수
	avg = (double)sum / count;		//우측이 int가 되므로 (double)형 변환 필요
	printf("평균: %.1f\n", avg);

	//최소값
	min = score[0];		//배열의 첫번째을 최소값 설정
	for (int i = 0; i < count; i++)
	{
		if (score[i] < min)	//비교할 점수가 최소값보다 작으면
			min = score[i];		//그 점수를 최소값에 저장
	}
	printf("최소값: %d\n", min);
	/*
		i=1; 85 < 75, min=75
		i=2; 90 < 75, min=75
		i=3; 75 < 75, min=75
		i=4; 80 < 75, min=75
	*/

	//최대값
	max = score[0];		//배열의 첫번째을 최대값 설정
	for (int i = 0; i < count; i++)
	{
		if (score[i] > max)		//비교할 점수가 최대값보다 크면
			max = score[i];		//그 점수를 최대값에 저장
	}
	printf("최대값: %d\n", max);



	return 0;
}