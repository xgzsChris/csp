//如果选择不区分将输入的所有字符串全部转化为小写再用find找有无相同的，如果选择区分大小写则直接用find函数

#include <iostream>
#include <stdio.h> 
#include <string>
using namespace std;
string change(string s)
{
	string newstr = "";
	for (int i = 0; i<s.length(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
		{
			newstr += char(s[i] - 'A' + 'a');
		}
		else
			newstr += s[i];
	}
	return newstr;
}
int main()
{
	string s;
	cin >> s;
	int choose;
	cin >> choose;
	int n;
	cin >> n;
	string changes = change(s);
	for (int i = 0; i<n; i++)
	{
		string s1;
		cin >> s1;
		if (choose == 1)
		{
			if (s1.find(s)<s1.length())
			{
				cout << s1.find(s) << endl;
				cout << s1 << endl;
			}
		}
		else
		{
			string s2;
			s2 = change(s1);
			//cout<<"s2:"<<s2<<endl;
			if (s2.find(changes)<s2.length())
			{
				cout << s1 << endl;
			}
		}
	}
	system("pause");
	return 0;
}