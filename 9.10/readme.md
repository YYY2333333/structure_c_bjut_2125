说明
====
本次题目如下：
编程题：用线性表的顺序表示方法创建一个线性表（1， 2， 4），用printf函数输出结果，请写出代码并截图。

相关示例代码：


include <malloc.h>   // malloc()等

include <stdio.h>    // printf()等

include <process.h>  // exit()

// 函数结果状态代码

define TRUE        1

define FALSE       0

define OK          1

define ERROR       0

define INFEASIBLE  -1

ifndef OVERFLOW

define OVERFLOW    -2 

endif // math.h中可能已定义OVERFLOW


typedef int ElemType;     //用户指定数据类型

define LIST_INIT_SIZE 10 // 线性表存储空间的初始分配量

define LIST_INCREMENT 2  // 线性表存储空间的分配增量

struct SqList

{

    ElemType *elem;    // 存储空间基址

    int      length;   // 当前长度

    int      listsize; // 当前分配的存储容量(以sizeof(ElemType)为单位)

};


void InitList(SqList &L);


void main()

{

    // 初始化线性表

    SqList sqList;

    InitList(sqList);

    printf("线性表已初始化\n");

	

	printf("线性表的第一、二个元素是 %d, %d \n", sqList.elem[0], sqList.elem[1]);


}


void InitList(SqList &L) // 算法2.3

{   // 操作结果：构造一个空的顺序线性表L

	//  void *malloc(size_t size) 分配所需的内存空间，并返回一个指向它的指针

    L.elem = (ElemType*) malloc(LIST_INIT_SIZE * sizeof(ElemType));

    printf("ElemType size %d \n", sizeof(ElemType));

	if (!L.elem) {

        exit(OVERFLOW); // 存储分配失败

    }

	printf("基地址为 %d \n", L.elem);

    L.length = 0; // 空表长度为0

    L.listsize = LIST_INIT_SIZE; // 初始存储容量

	ElemType * p;

	p = L.elem;

	printf("address of p %d \n", p);

	*p = 10;

	printf("地址p上的值（*p）为 %d \n", *p);

	printf("基地址上的值（*L.elem）为 %d \n", *L.elem);

	p++;

	*p = 12;

	printf("后移操作后，地址p上的值（*p）为%d \n", p);

	printf("顺序表的第一、二个元素为%d %d \n", *L.elem, *(L.elem+1));


}


#分析
一个简单的线性表的修改和读取，不会好好看看书就行。
![](https://inews.gtimg.com/newsapp_match/0/14848281776/0)


