#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int number = 0, yournumber = 0, i = 0;

	//����ʱ�����ӣ����ܶ�����forѭ��֮�У�����ˣ���Ϊα���
	srand((unsigned)time(NULL));
	for (i; i < 100; i++)//�鿴����ĵ����Ƿ�Ϊ�����
	{
		number = rand() % 101;
		printf("%d\t", number);
	}
	printf("\n");

	printf("������������Ϊ����\n");
	scanf_s("%d", &yournumber);

	while (number!=yournumber)
	{
		if (number > yournumber)
		{
			printf("С\n���ز�\n");
			scanf_s("%d", &yournumber);
			continue;
		}	
		else if (number < yournumber)
		{
			printf("��\n���ز�\n");
			scanf_s("%d", &yournumber);
		}
	}
	printf("��ϲ��¶���\n");

	return 0;
}