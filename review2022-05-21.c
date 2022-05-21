//#include<stdio.h>
//#define Height 10
//int calculate(int Long, int Width);
//
//int main()
//{
//	int ilong,iwidth,result;
//
//	printf("The height is 10\n");
//
//	printf("Please enter the long:");
//	scanf_s("%d", &ilong);
//
//	printf("Please enter the width:");
//	scanf_s("%d", &iwidth);
//
//	result = calculate(ilong,iwidth);
//	printf("The result is %d", result);
//
//	return 0;
//}
//
//int calculate(int Long, int Width)
//{
//	int result = Long * Width*Height;
//	return result;
//}


#include<stdio.h>

int main()
{
	int ilong, iwidth, iheight=10,result  ;

	printf("The height is 10\n");

	printf("Please enter the long:");
	scanf_s("%d", &ilong);

	printf("Please enter the width:");
	scanf_s("%d", &iwidth);

	result = ilong * iwidth * iheight;
	printf("The result is %d", result);

	return 0;
}




