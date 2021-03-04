// 用额外空间标记要消除的数的位置，也可直接在原数组上将其置为负数

#include<iostream>
using namespace std;

int main()
{
	int n, m;
	int a[30][30], b[30][30] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			if (a[i][j] == a[i][j + 1] && a[i][j] == a[i][j + 2])
				b[i][j] = b[i][j + 1] = b[i][j + 2] = 1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 2; j++)
		{
			if (a[j][i] == a[j + 1][i] && a[j][i] == a[j + 2][i])
				b[j][i] = b[j + 1][i] = b[j + 2][i] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (b[i][j] == 1)
				cout << "0 ";
			else
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
    return 0;
}

