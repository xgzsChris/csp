//从数组的第一个数开始依次向后遍历，每一个遍历的数再和其后面的数作差，为1或-1的，num++

#include<iostream>
using namespace std;

int main()
{
	int n, a[1000];
	int num = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[j] - a[i] == 1 || a[j] - a[i] == -1)
				num++;
		}
	}
	cout << num << endl;
	system("pause");
    return 0;
}

