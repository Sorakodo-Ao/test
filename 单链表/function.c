#define _CRT_SECURE_NO_WARNINGS 1
#include"depository.h"
Node* Create_list()//创建链表
{
	int input_number;
	int i;
	int input_data = 0;
	Node* pHead = (Node*)malloc(sizeof(Node));
	if (pHead == NULL)
	{
		printf("动态创建链表头结点错误！\n");
		return;
	}
	printf("动态创建链头结点表成功！\n");
	printf("请输入链表长度：");
	scanf("%d", &input_number);
	Node* pTail = pHead;
	for (i = 0; i < input_number; i++)
	{
		Node* pNew = (Node*)malloc(sizeof(Node));
		if (pNew == NULL)
		{
			printf("动态分配结点错误！\n");
			return;
		}
		printf("请输入结点所存储的数据：");
		pNew->data = input_data;
		scanf("%d", &input_data);
		pNew->pNext = NULL;
		pTail->pNext = pNew;
		pTail = pNew;
	}
	return pHead;

}
void Traverse_list(Node* pHead)//遍历链表
{
	Node* p = pHead->pNext;
	while (p != NULL)
	{
		printf(" %d ", p->data);
		p = p->pNext;
	}
}
void Free_list(Node* pHead)//释放动态内存
{
	Node* ptemp = pHead;
	while (ptemp != NULL)
	{
		pHead = pHead->pNext;
		free(ptemp);
		ptemp = pHead;
	}
}
void Add_list(Node* pHead)
{
	int add_number;
	int i;
	int input_data = 0;
	Node* p = pHead->pNext;
	while (p->pNext != NULL)
	{
		p = p->pNext;
	}
	printf("请输入要扩充的链表的长度：");
	scanf("%d", &add_number);
	for (i = 0; i < add_number; i++)
	{
		Node* ptr = (Node*)malloc(sizeof(Node));
		if (ptr == NULL)
		{
			printf("动态扩充链表错误！");
			return;
		}
		//printf("动态扩充链表成功！\n");
		printf("请输入结点所存储的数据：");
		scanf("%d", &input_data);
		ptr->data = input_data;
		ptr->pNext = NULL;
		p->pNext = ptr;
		p = ptr;
	}

}