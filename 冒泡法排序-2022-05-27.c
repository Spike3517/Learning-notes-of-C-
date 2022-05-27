//随机输入10个数字到数组，然后排序输出


#include<stdio.h>
int main()
{
	int arr[10];
	int m, n, i,min,nin;

	//输入数组
	printf("Please enter the array\n");
	for (i = 0;i < 10;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n");

	//显示数组
	printf("the arr is\n");
	printf("{");
	for (i = 0;i < 10;i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\b}");
	printf("\n");

	//数组排序
	n = 0;
	for (m = 9;n < 10;n++)
	{
		min = arr[m];
		nin = m;
		for (i = m - 1;i >= n;i--)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				nin = i;
			}
		}
		arr[nin] = arr[n];
		arr[n] = min;
	}
	printf("\n");

	//显示数组
	printf("The array affter exchange is \n");
	printf("{");
	for (i = 0;i < 10;i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\b\b}");
	printf("\n");
	return 0;
}