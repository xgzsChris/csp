//转化为涂色问题

#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	//clock_t start, finish;
	//start = clock();
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
	//finish = clock();
	//cout << finish - start;
	system("pause");
    return 0;
}

//哈希表

#include<iostream>
#include<unordered_map>
#include<time.h>
using namespace std;

int main()
{
	//clock_t start, finish;
	//start = clock();
	unordered_map<int, int> mp;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (mp.count(x) != 0)
		{
			mp[x]++;
			cout << mp[x] << " ";
		}
		else
		{
			mp[x] = 1;
			cout << mp[x] << " ";
		}
	}
	//finish = clock();
	//cout << finish - start;
	system("pause");
	return 0;
}
