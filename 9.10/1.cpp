#include <malloc.h>   

#include <stdio.h>    

#include <pthread.h>  //linux环境不是process.h但是window这里可以用pthread.h 

typedef int ElemType;     //用户指定数据类型

#define LIST_INIT_SIZE 10 // 线性表存储空间的初始分配量

#define LIST_INCREMENT 2  // 线性表存储空间的分配增量

typedef struct SqList   //定义结构linux不加typedef会报错 

{

    ElemType *elem;    // 存储空间基址

    int      length;   // 当前长度

    int      listsize; // 当前分配的存储容量(以sizeof(ElemType)为单位)

}SqList;

void InitList(SqList &L)  //这种写法文件后缀必须是.cpp否则报错。 
{  
    L.elem = (ElemType*) malloc(LIST_INIT_SIZE * sizeof(ElemType));

    L.length = 0; // 空表长度为0

    L.listsize = LIST_INIT_SIZE; // 初始存储容量

	ElemType * p;

	p = L.elem;
//通过p++移动指针修改线性表元素。 
	*p = 1;
	 p++;
	*p = 2;
        p++;
        *p=4;


}

int main()

{

    // 初始化线性表

    SqList sqList;

    InitList(sqList);

	printf("线性表的第一、二、三个元素是 %d, %d，%d \n", sqList.elem[0], sqList.elem[1],sqList.elem[2]);


}


