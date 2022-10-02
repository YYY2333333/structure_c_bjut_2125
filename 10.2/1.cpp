
#include <malloc.h>   

#include <stdio.h>  


typedef int ElemType;


typedef struct LNode

{

    ElemType data;

    LNode    *next;

}LNode, *LinkList;
void CreateList(LinkList &L)
{
L=(LinkList)malloc (sizeof (LNode));
L->next=NULL;//头为空 
LinkList p;
p=(LinkList)malloc (sizeof (LNode));//生成新结点
p->data=4;
p->next=L->next;L->next=p;//把p接上； 
}
int main(){
	LinkList L;
	ElemType e;
	CreateList(L);
	e=L->next->data;//用e取出来 
	printf("%d\n",e);
}
