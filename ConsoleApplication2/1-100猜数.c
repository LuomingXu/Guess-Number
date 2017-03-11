#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int number = 0;
    int yournumber = 0;
    int i = 0;
    //All this change is for test, forgive me, my applogize.
	//定义时间种子，不能定义在for循环之中，若如此，就为伪随机
	srand((unsigned)time(NULL));

    //以下for循环为查看所得的数是否为随机数
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
	printf("这是一个打印测试\n");

	return 0;
}
