#include <stdio.h>

//Employee(사원) 구조체 정의
typedef struct {
	int id;				// 사원 ID
	char name[20];		// 사원 이름
	int salary;			// 급여
} Employee;

int main()
{
	//struct없이 구조체 변수 선언
	/*Employee e1 = { 1,"이사원", 30000000 };

	printf("사원 ID: %d\n", e1.id);
	printf("사원 이름: %d\n", e1.name);
	printf("사원 급여: %d\n", e1.salary);*/

	Employee e[3] = {
		{1,"이사원", 30000000},
		{2,"김사원", 40000000},
		{3,"박사원", 50000000}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("ID: %d, 이름: %s, 급여: %d\n", e[i].id, e[i].name, e[i].salary);
	}

	return 0;
}