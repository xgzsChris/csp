#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n, res = 0;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
		res = max(res, abs(a[i] - a[i - 1]));
	cout << res << endl;
	system("pause");
    return 0;
}

