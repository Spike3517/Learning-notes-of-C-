//ถþฮฌสýื้

#include<stdio.h>

int main()
{
	int iarr[3][3], m,n;

	for (m = 0; m < 3; m++)
	{
		for (n = 0; n < 3; n++)                        
		{
			printf("The iarr[%d][%d] is :",m,n);                   
			scanf_s("%d",&iarr[m][n]);                       /* 2 7 6 9 5 1 4 3 8 */
		}
	}
	printf("\n");

	printf("the result is :\n");
	for (m = 0;m < 3;m++)
	{
		for (n = 0;n < 3;n++)
		{
			printf("%d",iarr[m][n]);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}

