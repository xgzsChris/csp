//每次只和前一个数比，用t记录前一个数

#include<iostream>
using namespace std;

int main()
{
	int n, t = 0, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x != t && i != 0)
		{
			sum++;
			t = x;
		}
		else if (i == 0)
		{
			sum++;
			t = x;
		}
	}
	cout << sum;
	system("pause");
    return 0;
}

