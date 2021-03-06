//先建立哈希表，key为数，value为出现次数，再把哈希表用vector存储，用vector排序，并改写sort()和cmp()

#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second > b.second)   //按照value从大到小重新排序
		return 1;
	else if (a.second == b.second)
	{
		if (a.first > b.first)
			return 0;
		else
			return 1;
	}
	else
		return 0;
}

int main()
{
	unordered_map<int, int> mp;
	vector<pair<int, int>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (mp.count(x) != 0)
		{
			mp[x]++;
		}
		else
		{
			mp[x] = 1;
		}
	}
	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		v.push_back(pair<int, int>(i->first, i->second));
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << endl;
	system("pause");
    return 0;
}

