//#include <stdio.h>
///*
//	숫자를 입력받음
//	-1을 입력하면 종료
//*/
//
//int main()
//{
//	int num = -1;
//	//1. while문
//	/*while (num != -1)			//while 문 안으로 들어갈 수 없음 --------------실행 하자마자 끝
//	{
//		printf("-1 입력시 종료: ");
//		scanf_s("%d", &num);
//	}*/
//
//	//2. do ~ while문
//	/*do {
//		printf("-1 입력시 종료: ");
//		scanf_s("%d", &num);
//	} while (num != -1);*/
//
//	//2. while ~ if ~ break (조건 반복문)
//	while (1) {
//		printf("-1 입력시 종료: ");
//		scanf_s("%d", &num);
//		if (num == -1)
//			break;
//	}
//
//
//	return 0;
//}