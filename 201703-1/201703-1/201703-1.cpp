//类似于贪心算法

#include<iostream>
using namespace std;

int main()
{
	int n, k, sum = 0, num = 0;
	int a[1000];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (sum == 0)
			num++;
		sum = sum + a[i];
		if (sum >= k)
		{
			sum = 0;
		}
	}
	cout << num << endl;
	system("pause");
    return 0;
}

