//�������뵥�ʵ�����


#include<stdio.h>
int main()
{
	char crr[100];
	int i, quantity =1;
	printf("Please enter the word\n");
	gets(crr);
	for (i = 0;crr[i] != '\0';i++)
	{
		if (crr[i] == ' ')                //һ��Ҫ���ֵȺš�=����ֵ �͡�==���ж�������
		{
			quantity++;
		}

	}

	printf("the quantity is %d", quantity);

	return 0;
}