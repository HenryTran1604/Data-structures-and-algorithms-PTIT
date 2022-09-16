#include <bits/stdc++.h>
using namespace std;
int n, b[20];
void print()
{
	if(b[1] == 0 || b[n] == 1) return;
	int count6;
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == 0 && i <= n-3)
		{
			count6 = 0;
			for(int j = i; j <= i+3; j++)
			{
				if(b[j] == 0)
					count6++;
			}
			if(count6 == 4)
				return;
		}
		if(b[i] == 1 && b[i+1] == 1)
			return;
	}
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == 0)
			cout << 6;
		else cout << 8;
	}
	cout << endl;
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		b[i] = j;
		if(i == n)
			print();
		else Try(i+1);
	}
}
int main()
{
	int t; t = 1;;
	while(t--)
	{
		cin >> n;
		Try(1);
	}
}
