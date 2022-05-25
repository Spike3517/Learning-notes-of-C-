//测量输入字符串的长度


#include<stdio.h>
int main()
{
	char crr[100];
	int i,length=0;
	printf("Please enter the crr\n");
	gets(crr);
	for (i = 0;crr[i]!='\0';i++)
	{
		length++;
	}

	printf("the length is %d",length);

	return 0;
}