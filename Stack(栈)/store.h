#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<malloc.h>
#define STACK_NUMBER 15
typedef struct node
{
	int data;
	struct node* pNext;
}Node;
typedef struct stack
{
	struct node* Top;
	struct node* Bottom;
}Stack;
void Init_Stack(Stack* ps, Node* pHead);//初始化栈
void Insert_Stack(Stack* ps, int input_number);//往栈中插入元素
void Add_Stack(Stack* ps);//往栈中添加元素
bool Full_Stack(Stack* ps);//判断是否栈满
bool Empty_Stack(Stack* ps);//判断是否栈空
void Traversal_Stack(Stack* ps);//遍历栈
void Free_Stack(Stack* ps);//释放动态分配结点