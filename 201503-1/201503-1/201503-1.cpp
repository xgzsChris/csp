// 地址计算

#include<iostream>
using namespace std;

int main()
{
	int r, c;
	int a[1000][1000];
	cin >> r;
	cin >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = c - 1; i >= 0; i--)
	{
		for (int j = 0; j < r; j++)
		{
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	system("pause");
    return 0;
}

