// 用一位数组存储每月的天数，从一月开始加，加够了就开始计算月份和天数

#include<iostream>
using namespace std;

int main()
{
	int y, d, month, day;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> y >> d;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)    //是闰年
	{
		int sum = 0;
		a[1] = 29;
		for (int i = 0; i < 12; i++)
		{
			sum = sum + a[i];
			if (sum >= d)
			{
				month = i + 1;
				day = d - (sum - a[i]);
				break;
			}
		}
	}
	else
	{
		int sum = 0;
		for (int i = 0; i < 12; i++)
		{
			sum = sum + a[i];
			if (sum >= d)
			{
				month = i + 1;
				day = d - (sum - a[i]);
				break;
			}
		}
	}
	cout << month << endl;
	cout << day << endl;
	system("pause");
    return 0;
}

