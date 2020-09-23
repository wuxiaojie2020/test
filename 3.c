/*
 *作者：XXX
 *项目：c语言实用经典100题
 *题目：输入某年某月某日，判断这一天是这一年的第几天？
 */
#include <stdio.h>
int main()
{
	int y,m,d,days,February;
	printf("\nplease input year,month,day\n");
	scanf("%d,%d,%d",&y,&m,&d);
	if(y%400 == 0 || (y%4 == 0 && y%100 == !0))
		February = 29;
	else
		February = 28;
	switch (m)
	{
		case 1:
			days = 0;                                          /*不能用==,结果是错的*/
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 2:
			days = 31;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 3:
			days = 31+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;	
		case 4:
			days = 62+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;	
		case 5:
			days = 92+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 6:
			days = 123+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 7:
			days = 153+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 8:
			days = 184+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 9:
			days = 215+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 10:
			days = 245+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 11:
			days = 276+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
		case 12:
			days = 306+February;
			printf("%d年%d月%d日是一年中的%d天",y,m,d,days+d);
			break;
	}
	
	return 0;
	
}

