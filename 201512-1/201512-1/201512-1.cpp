//每次%10求出个位数，再右移，右移通过/10实现

#include<iostream>
using namespace std;

int main()
{
	long long int x;
	int sum = 0;
	cin >> x;
	do
	{
		sum = sum + x % 10;
		x = x / 10;
	} while (x != 0);
	cout << sum;
	system("pause");
    return 0;
}

