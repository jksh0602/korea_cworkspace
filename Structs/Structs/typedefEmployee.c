#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;				//사원 ID
	char name[20];		//사원 이름
	int salary;			//급여
}Point;

typedef struct {
	Point e1;
	Point e2;
	Point e3;
} Employee;

int main()
{
	//struct없이 구조체 변수 선언
	/*Employee e1 = { 1,"이사원", 30000000 };

	printf("사원 ID: %d\n", e1.id);
	printf("사원 이름: %d\n", e1.name);
	printf("사원 급여: %d\n", e1.salary);*/

	Employee e = {
		.e1 = {1,"이사원", 30000000},
		.e2 = {2,"이원사", 40000000},
		.e3 = {3,"이사우", 50000000}
	};

	for (int i = 0; i < 2; i++)
	{
		printf("ID: %d, 이름: %s, 급여: %d\n", e[i].e1);
	}

	return 0;
}