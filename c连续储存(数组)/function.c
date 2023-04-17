#define _CRT_SECURE_NO_WARNINGS 1
#include"depository.h"
int Create_Array(struct array* p)
{
	int len;
	printf("请输入数组长度：");
	scanf("%d",&len);
	p->parr = (int *)malloc(sizeof(int) * len);
	if (p->parr == NULL)
	{
		printf("动态分配错误！\n");
		return;
	}
	else
	{
		printf("动态分配成功！\n");
		p->length = len;
		p->eff_length = 0;
	}
	return len;
}
void Adding_Elements(struct array* p)
{
	int val = 0;//数组添加值
	int i;
	if (is_empty(p))
	{
		printf("数组为空！");
		return;
	}
	//if (is_full(p))
	//{
	//	//printf("数组已满，不可继续添加元素！\n");
	//	lengthen_arr(p);//加长数组
	//	return;
	//}
	if (p->eff_length > 0)
	{
		i = p->eff_length ;
	}
	else
	{
		i = 0;
	}
	for (; i < p->length; i++)
	{
		printf("请输入第%d个元素:", i + 1);
		scanf("%d", &val);
		p->parr[p->eff_length] = val;
		(p->eff_length)++;
	}
	/*printf("有效长度%d", p->eff_length);*/
}
void lengthen_arr(struct array* p) 
{
	int add_number;
	printf("请输入要加长的个数：");
	scanf("%d", &add_number);
	int* ptr = (int *)realloc(p->parr , sizeof(int)*(p->length) + sizeof(int)*add_number);
	if (ptr == NULL)
	{
		printf("动态加长数组失败\n");
	}
	else
	{
		p->parr = ptr;
		p->length+= add_number;
	}
	return;
}
bool is_empty(struct array* p)
{
	if(p->parr == NULL)
	{
		return true;
	}
	else 
	{ 
		return false;
	}
}
bool is_full(struct array* p)
{
	if (p->eff_length == p->length)
	{
		return true;
	}
	else { return false; }
}
void Display_Array(struct array* p)
{
	int i;
	for (i = 0; i < p->length; i++)
	{
		printf(" %d ", p->parr[i]);
	}
}