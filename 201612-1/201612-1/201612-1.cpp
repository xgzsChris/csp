//对n个数进行排序，找出中间那个数。lower_bound( )和upper_bound( )都是利用二分查找的方法在一个排好序的数组中进行查找的，返回值为该数字的地址

#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int mid = a[n / 2];
	int lb = lower_bound(a, a + n, mid) - a;
	int ub = upper_bound(a, a + n, mid) - a;
	if (n - ub == lb)
		cout << mid << endl;
	else
		cout << -1 << endl;
	system("pause");
    return 0;
}

