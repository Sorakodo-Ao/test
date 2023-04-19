#pragma once
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node* pNext;
}Node;
Node* Create_list();//创建链表
void Traverse_list(Node* pHead);//遍历链表
void Free_list(Node* pHead);//释放动态内存
void Add_list(Node* pHead);//扩充链表