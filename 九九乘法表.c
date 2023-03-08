#include<stdio.h>
#include<stdlib.h>
main()
{  
int i=0;
int j=0;
for(i = 0;i <= 9;i++)
{
	for(j = 0;j <= i;j++)
	{
		printf(" %d * %d=%d   ", i , j , i*j );
	}
	printf("\n");

}

system("pause");
return 0;
}