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
//	int day = 0, total = 1020;                //����������ֱ�洢��������������������֮��ʣ������
//	while (total)                                //ѭ��������������������Ϊ0ʱ������ѭ��
//	{
//		total = total / 2 - 2;                  //ʣ��������ԭ����һ����2                     //��sale����total
//		day++;                                  //������1
//	}
//	printf("��Щ���ϣ�һ����%d��\n", day);    //��������Ϣ
//	return 0;                                 //�������
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