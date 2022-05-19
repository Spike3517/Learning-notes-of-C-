//公鸡每只5元，母鸡每只3元，小鸡三只1元
//花一百元买一百只公鸡母鸡小鸡
//列举所有情况

#include<stdio.h>
int main()
{
	int x,y,z,i=1;
	float n;
	for (x = 0; x <= 20;x++)
	{
		for (y = 0;y <= 33;y++)
		{
			for (z = 0;z <= 300;z++)
			{
				n = 5 * x + 3 * y + z / 3.0f;
				if (n == 100&&x+y+z==100)
				{
					printf("第%d种情况：买%d只公鸡，%d只母鸡，%d只小鸡\n", i, x, y, z);
					i++;
				}
			}
		}
	} 
	return 0;
}