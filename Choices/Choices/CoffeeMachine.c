//#include <stdio.h>
///*
//	커피 자판기에 500원을 넣으면 커피가 나옴
//	500원 초과 - 거스름돈 + 커피
//	500원 미만 - 커피가 나오지 않음
//	커피는 총 5개, 모두 소진시 종료
//*/
//int main() 
//{
//	int money = 500;
//	int coffee = 5;
//
//	while (1) 
//	{
//		printf("동전을 넣어주세요: ");	//동전(커피 가격)
//		int result = scanf_s("%d", &money);
//		if (result != 1)
//		{
//			//문자입력 오류 처리
//			while (getchar() != '\n');
//			printf("잘못된 입력입니다.\n");
//		}
//		else   //result == 1
//		{
//			//정상 코드
//
//			if (money == 500)
//			{
//				printf("커피가 나옵니다.\n");
//				coffee--;		//coffee -= 1;
//			}
//			else if (money > 500)
//			{
//				printf("커피와 거스름돈 %d원이 나옵니다.\n", (money - 500));
//				coffee--;		//coffee -= 1;
//			}
//			else
//			{
//				printf("커피가 나오지 않고, 돈을 돌려받습니다.\n");
//			}
//
//			//커피 소진
//			if (coffee == 0) {
//				printf("커피가 모두 소진되어 판매를 중단합니다.\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}