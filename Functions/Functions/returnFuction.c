#include <stdio.h>

//return�� �ִ� �Լ�
//�������� ����ϴ� �Լ� ����
int square(int x)
{
	return x * x;
}

//���밪�� ����ϴ� �Լ� ����
int myAbs(int x)
{
	//x�� ������ ����϶� ����
	if (x < 0) { 
		return -x; 
	}
	else //x > 0
	{
		return x; 
	}
}

//�� ���� ���ϴ� �Լ� ����
double add(double x, double y)
{
	return x + y;
}

int main()
{
	//�Լ� ȣ��
	int value1, value2;
	double value3;

	//square() �Լ� ȣ��
	value1 = square(3);

	//myAbs() ȣ��
	value2 = myAbs(-5);

	//add()ȣ��
	value3 = add(3.45 , 4.74);

	printf("%d \n%d \n%.2f \n", value1, value2, value3);


	return 0;
}