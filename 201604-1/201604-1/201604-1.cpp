#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n - 1; i++)
	{
		if ((a[i] - a[i - 1] > 0 && a[i + 1] - a[i] < 0) || (a[i] - a[i - 1] < 0 && a[i + 1] - a[i]>0))
			sum++;
	}
	cout << sum << endl;
	system("pause");
    return 0;
}

