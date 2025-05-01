#include <stdio.h>

int main()
{
	/*
		������ ����, ���, �ִ밪, �ּҰ�
	*/

	int score[5] = { 85,75,90,75,80 };		//����
	int sum = 0;	//�հ�
	double avg;		//���
	int min, max;		//�ּ�

	//�迭�� ũ��(����) - count
	int count = sizeof(score) / sizeof(score[0]);	//20Byte / 4Byte = 5
	printf("�迭�� ũ��: %d\n", count);

	//���� ���ϱ�
	//score[0] + score[1] + score[2] + ...
	for (int i = 0; i < count; i++)
	{
		sum += score[i];		//sum = sum + score[i]
	}
	printf("����: %d\n", sum);

	//��� ��� = �հ� / ����
	avg = (double)sum / count;		//������ int�� �ǹǷ� (double)�� ��ȯ �ʿ�
	printf("���: %.1f\n", avg);

	//�ּҰ�
	min = score[0];		//�迭�� ù��°�� �ּҰ� ����
	for (int i = 0; i < count; i++)
	{
		if (score[i] < min)	//���� ������ �ּҰ����� ������
			min = score[i];		//�� ������ �ּҰ��� ����
	}
	printf("�ּҰ�: %d\n", min);
	/*
		i=1; 85 < 75, min=75
		i=2; 90 < 75, min=75
		i=3; 75 < 75, min=75
		i=4; 80 < 75, min=75
	*/

	//�ִ밪
	max = score[0];		//�迭�� ù��°�� �ִ밪 ����
	for (int i = 0; i < count; i++)
	{
		if (score[i] > max)		//���� ������ �ִ밪���� ũ��
			max = score[i];		//�� ������ �ִ밪�� ����
	}
	printf("�ִ밪: %d\n", max);



	return 0;
}