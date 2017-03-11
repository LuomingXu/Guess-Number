#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int countNumber(int start,int finish);

int main(int argc, char const *argv[])
{
	int number = 0;
    int yournumber = 0;
    int i = 0;
    int choose=0;
    int start=0;
    int finish=0;
    switch(choose)
    {
    case 1:
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
        break;
    case 2:
        printf("请输入开始与结束的数字，以\",\"为隔\n"); 
        scanf_s("%d,%d",&start,&finish);
        printf("和为:%d",countNumber(start,finish);
        break;
    defult:
        printf("请输入1或2\n"):
        break;
    }
    printf("退出成功\n");
	return 0;
}
int countNumber(int start,int finish)
{
    int sum=0;
    
    for(start;start<=finish;start++)
    {
        sum+=start;
    }

    return sum;
}
