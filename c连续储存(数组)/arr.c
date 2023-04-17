#define _CRT_SECURE_NO_WARNINGS 1
#include"depository.h"

int main()
{
	struct array arr;//声明结构体arr
	struct array* p = &arr;
	int i;//循环次数
	int number = Create_Array(&arr);//创建结构体arr，并接收数组长度
	int input;
	Adding_Elements(&arr);//给数组添加元素
	Display_Array(&arr);//打印数组元素
	printf("\n");
	printf("是否继续添加元素？（是：1，否：0）\n");
	scanf("%d", &input);
	printf("\n");
	if (input == 1)
	{
		lengthen_arr(&arr);//加长数组
		Adding_Elements(&arr);//给数组添加元素
		Display_Array(&arr);//打印数组元素
	}

	free(p->parr);
	return 0;

}