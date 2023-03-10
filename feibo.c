#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a = 1,b = 1,c = 1;
	int input;
	int i=0;
	printf("please input:");
	scanf("%d",&input);
	if(input >= 1&&input <= 2)
	{
		c=1;
		printf("%d ",c);
	}
	else 
	{
		for(i = 3;i <= input;i++)
		{
			a=b;
			b=c;
			c=a+b;
			printf("%d ",c);
		}
	}
	system("pause");
	return 0;
}