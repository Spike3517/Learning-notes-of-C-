//�������10�����ֵ����飬Ȼ���������


#include<stdio.h>
int main()
{
	int arr[10];
	int m, n, i,min,nin;

	//��������
	printf("Please enter the array\n");
	for (i = 0;i < 10;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n");

	//��ʾ����
	printf("the arr is\n");
	printf("{");
	for (i = 0;i < 10;i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\b}");
	printf("\n");

	//��������
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

	//��ʾ����
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