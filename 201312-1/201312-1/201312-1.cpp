// 先将数组排序，再分别记录当前扫描的数及该数出现的次数，将出现最高的次数和数字记录下来

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[10000], n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	/*for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;*/
	int x = 1, num = 1, t = arr[0], y = arr[0];
	for (int i = 1; i < n; i++)
	{
		//cout << t << " " << arr[i]<<" ";
		if (t == arr[i])
			x++;
		else
		{
			if (x > num)
			{
				num = x;
				y = t;
			}
			x = 1;
			t = arr[i];
		}
		//cout << x << " " << t << endl;
	}
	cout << y;
	//system("pause");
    return 0;
}

