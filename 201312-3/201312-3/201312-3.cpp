//高度递增找所有矩形，如果后面一列高度不够就计算面积，并把左标记移到该列

#include<iostream>
using namespace std;

int main()
{
	int left, right, n, a[1002], maxheight = 0, now, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > maxheight)
			maxheight = a[i];
	}
	for (int i = 1; i <= maxheight; i++)
	{
		left = 0;
		right = 0;
		while (1)
		{
			left = right;
			if (left == n)
				break;
			while (right < n&&a[right] >= i)
			{
				right++;
			}
			now = (right - left)*i;
			if (now > max)
				max = now;
			if (right < n&&a[right] < i)
				right++;
		}
	}
	cout << max;
	system("pause");
    return 0;
}

