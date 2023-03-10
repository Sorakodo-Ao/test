#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
main()
{
	int arr[100][100]={0};
	int i,j,space;
	int num;
	printf("«Î ‰»Î£∫");
	scanf("%d",&num);
	for(i = 1;i <= num;i++)
	{
		for(space = 1;space <= num-i;space++)
		{
			printf(" ");
		}
			for(j = 1;j <= i;j++)
			{
				if(j == 1||j == i)
				{
					arr[i][j] = 1;
				}
				else {arr[i][j] = arr[i-1][j-1] + arr[i-1][j];}
				printf(" %d ",arr[i][j]);
			}
			printf("\n");


	}
	system("pause");
	return 0;
}