#include <stdio.h>
#define MAX_LEN 5		//��ũ�� ���

int main()
{
	//�迭�� ��� ����
	int arr[MAX_LEN] = { 1,2,3,4,5 };		//�迭�� ũ�⿡ ���� ��� ���� - ����� ����

	//��ü���
	for (int i = 0; i < MAX_LEN; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//2�� �ε��� ���(3) ����
	arr[2] = 0;		//0���� ����

	//�迭�� �ε����� �������� �̵�
	for (int i = 2; i < 4; i++)
	{
		arr[i] = arr[i + 1];
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}