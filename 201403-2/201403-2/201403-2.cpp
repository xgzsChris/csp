//用二维数组存（x1，y1）（x2，y2）并拿出一位用来编号，从最上层开始找，如果符合输出结果并放到最顶层，将原来上面的窗口从下往上依次下降一个层次

#include<iostream>
using namespace std;

int main()
{
	int m, n;
	int a[10][5];
	int b[10][2];
	int t[1][5];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> b[i][j];
	}
	for (int i = 0; i < n; i++)
		a[i][4] = i + 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (b[i][0] >= a[j][0] && b[i][0] <= a[j][2] && b[i][1] >= a[j][1] && b[i][1] <= a[j][3])
			{
				cout << a[j][4] << endl;
				if (j != n - 1)
				{
					for (int k = 0; k < 5; k++)
						t[0][k] = a[j][k];
					for (int k = j; k < n - 1; k++)
					{
						for (int p = 0; p < 5; p++)
							a[k][p] = a[k + 1][p];
					}
					for (int k = 0; k < 5; k++)
						a[n - 1][k] = t[0][k];
				}
				break;
			}
			else if (j == 0)
				cout << "IGNORED" << endl;
		}
	}
	system("pause");
    return 0;
}


