//转化为涂色问题

#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[1000], b[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		b[a[i]]++;
		cout << b[a[i]] << " ";
	}
	system("pause");
    return 0;
}

