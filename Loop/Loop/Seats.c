//#include <stdio.h>
//
//int main()
//{
//	/*
//		자리배치도 프로그램
//		- 입장객수와 좌석열 수가 주어졌을때
//		- 줄(행) 수 계산하고
//		- 자리 출력하기
//	*/
//
//	int customer = 17;		//입장객 수
//	int column = 4;			//좌석 열 수
//	int row;				//좌석 줄 수
//	int seat=1;
//
//	printf("입장객 수 입력: ");
//	scanf_s("%d", &customer);
//
//	printf("좌석 열 수 입력: ");
//	scanf_s("%d", &column);
//	
//	if (customer % column == 0)
//	{
//		//오른쪽이 int형이 됨(형 변환 할 필요 없음)
//		row = customer / column;
//	}
//	else
//	{
//		row = (customer / column) + 1;
//	}
//	//printf("줄 수 : %d\n", row);
//
//	//자리 배치 - 중첩 for문 -> 외부(줄), 내부(열)
//	for (int i = 0; i <= row; i++) 
//	{
//		for (int j = 1; j <= column; j++) 
//		{
//			seat = column * i + j;
//			if (seat > customer) break;
//			printf("좌석%2d  ", seat);
//		}
//		printf("\n");
//	}
//	return 0;
//}