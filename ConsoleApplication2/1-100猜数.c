#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int number, yournumber = 0;
	int i = 0;
	srand((unsigned)time(NULL));
	for (i; i < 100; i++)
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
}