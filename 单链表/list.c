#define _CRT_SECURE_NO_WARNINGS 1
#include"depository.h"
int main()
{
	int choice;
	Node* pHead = NULL;
	pHead = Create_list();//创建链表
	Traverse_list(pHead);//遍历链表
	printf("\n");
	printf("是否需要扩充链表的长度？（1：是 0：否）\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		Add_list(pHead);//扩充链表
		Traverse_list(pHead);//遍历链表
	}

	Free_list(pHead);//释放动态内存
	return 0;
}
