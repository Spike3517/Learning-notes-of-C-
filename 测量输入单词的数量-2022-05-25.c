//测量输入单词的数量


#include<stdio.h>
int main()
{
	char crr[100];
	int i, quantity =1;
	printf("Please enter the word\n");
	gets(crr);
	for (i = 0;crr[i] != '\0';i++)
	{
		if (crr[i] == ' ')                //一定要区分等号“=”赋值 和“==”判定的区别
		{
			quantity++;
		}

	}

	printf("the quantity is %d", quantity);

	return 0;
}