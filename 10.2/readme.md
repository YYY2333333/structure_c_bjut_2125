说明
====
本次题目如下：
编程题：构建一个带有头结点的空单链表L，结点的数据结构如下，请写出代码,在上述带有头结点的空链表L的基础上，插入一个新的结点，并将结点的数据域赋值为4，最后打印数据域的值，写出代码并上传运行截图。

相关示例代码：
typedef int ElemType;


typedef struct LNode

{

    ElemType data;

    LNode    *next;

}LNode, *LinkList;



分析
------
看书30页，写的很清楚。没必要按照那个循环写因为你就只是处理一个元素，不过考虑到程序的扩展性也是可以的。就是麻烦。。我懒。。
![](https://img3.runjiapp.com/duoteimg/dtnew_techup_img/202207/20220704161558_45403.gif)


