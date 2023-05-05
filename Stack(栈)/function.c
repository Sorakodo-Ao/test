#define _CRT_SECURE_NO_WARNINGS 1
#include"store.h"
void Init_Stack(Stack* ps, Node* pHead)//初始化栈
{
	ps->Bottom = pHead;
	ps->Top = ps->Bottom;
}
void Insert_Stack(Stack* ps, int input_number)//往栈中插入元素
{
	int i;
	int input;
	for (i = 0; i < input_number; i++)
	{
		Node* pNew = (Node*)malloc(sizeof(Node));
		if (pNew == NULL)
		{
			printf("第 %d 个结点动态创建失败！", i + 1);
			return;
		}
		printf("请输入第 %d 个结点的数据：", i + 1);
		scanf("%d", &input);
		printf("第 %d 个结点创建成功！\n" , i + 1);
		pNew->data = input;
		pNew->pNext = ps->Top;
		ps->Top = pNew;
	}
}
bool Full_Stack(Stack* ps)//判断是否栈满
{
	int count = 0;
	Node* temp = ps->Top;
	while (temp != ps->Bottom)
	{
		count++;
		temp = temp->pNext;
	}
	if (count == STACK_NUMBER)
	{
		return true;
	}
	return false;
}
bool Empty_Stack(Stack* ps)//判断是否栈空
{
	if (ps->Bottom == ps->Top)
	{
		return true;
	}
	return false;
}
void Add_Stack(Stack* ps)//往栈中添加元素
{
	//printf("%d\n", ps->Top->data);
	int add_number;
	int i;
	int add_data;
	if (Full_Stack(ps))
	{
		return;
	}
	printf("请输入要增加的结点个数：");
	scanf("%d", &add_number);
	for (i = 0; i < add_number; i++)
	{
		Node* pNew = (Node*)malloc(sizeof(Node));
		if (pNew == NULL)
		{
			printf("新增结点失败！");
			return;
		}
		printf("请输入新增第%d个结点数据：",i + 1);
		scanf("%d", &add_data);
		pNew->data = add_data;
		pNew->pNext = ps->Top;
		ps->Top = pNew;
	}
}
void Traversal_Stack(Stack* ps)//遍历栈元素
{
	Node* temp = ps->Top;
	while(temp != ps->Bottom)
	{
		printf(" %d ", temp->data);
		temp = temp->pNext;
	}
}
void Free_Stack(Stack* ps)//释放动态分配结点
{
	Node* temp = ps->Top;
	while (temp != ps->Bottom)
	{
		ps->Top = temp->pNext;
		free(temp);
		temp = ps->Top;
	}
	free(ps->Bottom);
	ps->Bottom = NULL;
}