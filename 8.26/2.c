#include <stdio.h>


//定义抽象数据类型

typedef  struct {

    int ID;

    int type;

}vehicleInfo;

//声明函数

void AssignVehicle(vehicleInfo &structvehicleInfo, int ID, int type);


// 主函数

int main()

{
//定义结构变量 
        vehicleInfo structvehicleInfo;
//赋予结构体变量 
	AssignVehicle(structvehicleInfo, 1234, 3);
//用printf打印出来
	printf("ID: %d, type: %d \n", structvehicleInfo.ID,structvehicleInfo.type);

}


//定义函数AssignVehicle
void AssignVehicle(vehicleInfo &structvehicleInfo, int ID, int type)

{

	structvehicleInfo.ID = ID;

	structvehicleInfo.type = type;

}
