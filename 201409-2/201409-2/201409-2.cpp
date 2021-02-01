//对每次输入的x1,x2,y1,y2涂色，用a矩阵表示被涂了多少次，先计算出所有输入的矩形的面积，再根据a矩阵减掉多算的

#include<iostream>
using namespace std;

int main()
{
	int n, t=0, area = 0;
	int a[100][100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++)
		{
			for (int k = y1; k < y2; k++)
			{
				a[j][k]++;
			}
		}
		area = area + (x2 - x1)*(y2 - y1);
	}
	//cout << area << endl;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (a[i][j] != 1 && a[i][j] != 0)
			{
				area = area - (a[i][j] - 1);
			}
		}
	}
	cout << area << endl;
	system("pause");
    return 0;
}

