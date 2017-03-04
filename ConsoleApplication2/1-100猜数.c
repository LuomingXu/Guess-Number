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

	printf("请输入你所认为的数\n");
	scanf_s("%d", &yournumber);

	while (number!=yournumber)
	{
		if (number > yournumber)
		{
			printf("小\n请重猜\n");
			scanf_s("%d", &yournumber);
			continue;
		}	
		else if (number < yournumber)
		{
			printf("大\n请重猜\n");
			scanf_s("%d", &yournumber);
		}
	}
	printf("恭喜你猜对了\n");
}