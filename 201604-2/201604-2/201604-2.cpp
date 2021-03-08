//在界面添加最后一行1，4列从上到下，如果碰到1就停，用k记录行数

#include<iostream>
using namespace std;

int main()
{
	bool a[16][10], b[4][4];
	int col;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 10; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < 10; i++)
		a[15][i] = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cin >> b[i][j];
	}
	cin >> col;
	int k;
	bool over = 0;
	for (k = 0; k < 16; k++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (b[i][j] && a[k + i][col + j - 1])
					over = true;
			}
		}
		if (over)
			break;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			a[i + k - 1][j + col - 1] = a[i + k - 1][j + col - 1] + b[i][j];
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	system("pause");
    return 0;
}

