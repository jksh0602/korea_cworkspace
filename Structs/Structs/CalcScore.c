#include <stdio.h>
/*
	- 중첩 구조체 포인터 활용
	- 학생 구조체가 성적 구조체 자료형을 참조
*/

typedef struct {
	int math;	//수학 점수
	int eng;	//영어 점수
	double avg;	//평균
}Score;

typedef struct {
	int number;	//학번
	char name[20];	//이름
	Score score;	//성적 구조체 참조
}Student;

//과목의 평균 계산
void CalcAvg(Score *score) {		//포인터로 구조체를 필수적으로 전달함
	score->avg = (score->math + score->eng) / 2.0;	//실수형 자동변환
}

void showInfo(Student* s) {
	printf("학번 : %d, 이름 : %s\n", s->number, s->name);
	printf("수학 : %d, 영어 : %d\n", s->score.math, s->score.eng);
	printf("평균 : %.1lf\n", s->score.avg);
}

int main()
{
	//구조체 변수 선언
	Student st1 = {
		.number = 101,
		.name = "임시현",
		.score = {95,88,0.0}
	};

	Student st2 = {
		.number = 102,
		.name = "이정후",
		.score = {80,85,0.0}
	};

	//과목의 평균(반드시 주소로 전달)
	CalcAvg(&st1.score);
	CalcAvg(&st2.score);

	//학생의 정보 출력
	showInfo(&st1);	//호출(매개변수로 구조체 변수를 전달)
	showInfo(&st2);

	return 0;
}