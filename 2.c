/*
 *作者：XXX
 *项目：c语言实用经典100题
 *题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/
#include <stdio.h>
#include <math.h>          /*math.h 是个包含了数学运算的函数库,sqrt() 这个求平方根函数是包含在math.h里的*/
int main(void)                
{
	long int i,x,y;
	for(i = 1;i<100000;i++)
	{
		x = sqrt(i+100);
		y = sqrt(i+268);
		if((x*x == i+100)&&(y*y == i+268))
			printf("\n%ld\n",i);
	}
	return 0;
}
