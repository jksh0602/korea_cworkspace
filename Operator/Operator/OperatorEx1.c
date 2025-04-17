//#include <stdio.h>
//
///*
//	산술 연산자 : +, -, *, /, %
//*/
//
//int main() 
//{
//	int a = 99;
//	int b = 2;
//
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	//강제(명시적) 형변환(Type Conversation)
//	printf("%.1lf\n", a / (double)b);
//	printf("%d\n", a % b);
//
//	//증감 연산자 : ++(1증가), --(1감소)
//	// +=2 (2증가)
//	printf("%d\n", a++); //후치연산자		//a = a + 1		99
//	printf("%d\n", a);			//100
//	printf("%d\n", ++a); //전치연산자		//101
//	printf("%d\n\n", a);			//101
//	
//	printf("%d\n", a--); //후치연산자		//a = a + 1		101
//	printf("%d\n", a);			//100
//	printf("%d\n", --a); //전치연산자		//99
//	printf("%d\n", a);			//99
//
//	return 0;
//}