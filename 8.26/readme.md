#说明
本次题目如下：
参考如下所示的复数抽象数据类型代码，在VC++ 6.0（软件下载见资料包）中实现一个基于Win32控制台程序的交通应用：

(1)构建一个能够保存车牌号（ID， int型）和车辆类型（type， int型）的抽象数据类型vehicleInfo；

(2)定义一个结构体变量 structvehicleInfo；

(3)声明和定义构建结构体函数AssignVehicle，将（1234， 3）赋予结构体变量 structvehicleInfo，并用printf打印出来。请写出代码并上传运行截图。



//参考代码

include <stdio.h>



//定义一个抽象数据类型

typedef  struct {

    float realpart;

    float imagpart;

}complex;

//声明函数，在定义函数前要先声明

void Assign_address(complex &Z, float realval, float imagval);



// 主函数

int main()

{

        complex Z2;

 Assign_address(Z2, 3, 4);

 printf("real: %f, image: %f \n", Z2.realpart,Z2.imagpart);

}



//定义函数

void Assign_address(complex &Z, float realval, float imagval)

{

 Z.realpart = realval;

 Z.imagpart = imagval;

}
#分析
其实简单的替换就可以让程序跑起来，作业重点在于&的理解以及结构变量（如文件1）
文件二是用的全局的变量没有侧重于&的理解以及运用，我觉得会更舒服。（如文件2）

