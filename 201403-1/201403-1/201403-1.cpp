//两重循环比较

#include<iostream>
using namespace std;

int main()
{
	int n, t, num = 0;
	int a[500];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		t = a[i];
		for (int j = i; j < n; j++)
		{
			if (t == -a[j])
				num++;
		}
	}
	cout << num;
	system("pause");
    return 0;
}

