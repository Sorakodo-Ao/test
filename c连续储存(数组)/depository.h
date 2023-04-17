#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include<string.h>
struct array {
	int* parr;//数组指针
	int length;//数组长度
	int eff_length;//数组有效长度
};
int Create_Array(struct array* arr);
void Adding_Elements(struct array* arr);
bool is_empty(struct array* p);
bool is_full(struct array* p);
void Display_Array(struct array* p);
void lengthen_arr(struct array* p);