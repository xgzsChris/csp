// 将ISBN存入字符串，再将数字放到数组（ASCII形式），注意X

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int arr[10], j = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
		{
			arr[j] = s[i];
			j++;
		}
		else if (s[i] == 'X')
		{
			arr[j] = 10;
			j++;
		}
	}
	/*for (int i = 0; i < j - 1; i++)
		cout << arr[i];*/
	int num = 0;
	for (int i = 1; i <= j - 1; i++)
		num = num + (arr[i - 1] - 48) * i;
	//cout << arr[j - 1];
	if ((arr[j - 1] - 48) == num % 11)
		cout << "Right";
	else if (arr[j - 1] == num % 11)
		cout << "Right";
	else
	{
		for (int i = 0; i < s.size() - 1; i++)
			cout << s[i];
		if (num % 11 == 10)
			cout << "X";
		else
			cout << num % 11;
	}
	//system("pause");
    return 0;
}

