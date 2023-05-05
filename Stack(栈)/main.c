#define _CRT_SECURE_NO_WARNINGS 1
#include"store.h"
int main()
{
	int choice;
	int input_number;//结点元素个数
	Stack s;
	Node* pHead = (Node*)malloc(sizeof(Node));//头结点，不存储元素
	if (pHead == NULL)
	{
		printf("头结点创建错误，程序终止");
		return;
	}
	Init_Stack(&s, pHead);
	printf("请输入结点个数：");
	scanf("%d", &input_number);
	Insert_Stack(&s, input_number);
	Traversal_Stack(&s);
	printf("\n");
	printf("是否添加栈元素结点？（1.是 0.否）:");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:	
		Add_Stack(&s);
		Traversal_Stack(&s);
		printf("\n");
		break;
	case 0:
		break;
	default:
		printf("输入错误！");
		break;
	}
	Free_Stack(&s);
	system("pause");
	return 0;
}