#include <stdio.h>


//定义抽象数据类型

typedef  struct {

    int ID;

    int type;

}vehicleInfo;


//定义全局变量（结构变量） 


vehicleInfo structvehicleInfo;



//声明函数


void AssignVehicle(int ID, int type);


// 主函数

int main()

{
//赋予结构体变量 
	AssignVehicle(1234, 3);
//用printf打印出来
	printf("ID: %d, type: %d \n", structvehicleInfo.ID,structvehicleInfo.type);

}


//定义函数AssignVehicle
void AssignVehicle(int ID, int type)

{
	structvehicleInfo.ID = ID;
	structvehicleInfo.type = type;

}
