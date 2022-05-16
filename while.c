//#include<stdio.h>
//int main()
//{
//	int x=1020;
//	int n=0;
//	while (x != 0)
//	{
//		x = x / 2 - 2;
//		n++;
//	}
//	printf(" the result : %d",n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int day = 0, total = 1020;                //定义变量，分别存储天数、西瓜总数、卖出之后剩的数量
//	while (total)                                //循环条件是总数，当总数为0时，跳出循环
//	{
//		total = total / 2 - 2;                  //剩余数量是原来的一半少2                     //将sale赋给total
//		day++;                                  //天数加1
//	}
//	printf("这些西瓜，一共卖%d天\n", day);    //输出最后信息
//	return 0;                                 //程序结束
//}


#include<stdio.h>
int main()
{
	int n = 20;
	while (n)
	{
		printf("%d\n", n);
		n--;
	}
	
	return 0;
}