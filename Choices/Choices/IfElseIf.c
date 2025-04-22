//#include <stdio.h>
///*
//	다중 조건문(다중 if)
//	if() {}
//	else if() {}
//	else{}
//*/
//int main() {
//	/*
//		과목의 점수에 따른 학점 계산하기
//		90~100점 : A
//		80~89점 : B
//		70~79점 : C
//		70점 미만 : F
//	*/
//	int score = 98;
//	char grade;
//
//	if (score >= 90 && score <= 100) 
//	{
//		//printf("학점은 A입니다.");
//		grade = 'A';
//	}
//	else if (score >= 80)	//(score >= 80 && score <= 89) 
//	{
//		//printf("학점은 B입니다.");
//		grade = 'B';
//	}
//	else if (score >= 70)	//(score >= 70 && score <= 79)
//	{
//		//printf("학점은 C입니다.");
//		grade = 'C';
//	}
//	else 
//	{
//		//printf("학점은 F입니다.");
//		grade = 'F';
//	}
//	printf("학점은 %c입니다.\n", grade);
//
//
//	return 0;
//}