//用哈希表存储排数与剩余票数的关系，每次输入票数时对哈希表遍历，先查找是否可满足全部相邻，若无法满足（即未满足票数不为0）则依次寻找每排，只要碰到有剩余票数则分配

#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < 20; i++)
		mp[i] = 5;
	for (int i = 0; i < n; i++)
	{
		int x, k = 0;
		cin >> x;
		for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
		{
			if (it->second >= x)
			{
				for (int j = 0; j < x; j++)
					cout << 6 - it->second + j + k * 5 << " ";
				cout << endl;
				it->second = it->second - x;
				x = 0;
				break;
			}
			k++;
		}
		while (x != 0)
		{
			k = 0;
			for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
			{
				if (it->second >= x)
				{
					for (int j = 0; j < x; j++)
						cout << 6 - it->second + j + k * 5 << " ";
					cout << endl;
					it->second = it->second - x;
					x = 0;
					break;
				}
				else
				{
					for (int j = 0; j < it->second; j++)
						cout << 6 - it->second + j + k * 5 << " ";
					x = x - it->second;
					it->second = 0;
				}
				k++;
			}
		}
	}
	system("pause");
    return 0;
}

