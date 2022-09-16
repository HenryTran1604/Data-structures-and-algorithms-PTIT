#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char x, a[20];
bool used[20];
void print()
{
//	a[0] = 'A'; a[x-'A'+2] = 'E'; // 
	for(int i = 2; i <= x-'A'; i++)
	{
		if(a[i] == 'A' && a[i-1] != 'E' && a[i+1] != 'E') return;
		if(a[i] == 'E' && a[i-1] != 'A' && a[i+1] != 'A') return;
	}
	for(int i = 1; i <= x-'A'+1; i++)
	{
		cout << a[i];
	}
	cout << endl;
}
void Try(int i)
{
	for(char j = 'A'; j <= x; j++)
	{
		if(!used[j])
		{
			a[i] = j;
			used[j] = 1;
			if(i == x - 'A'+1)
				print();
			else Try(i+1);
			used[j] = 0;
		}
	}
}
int main()
{
	int t; t = 1;
	while(t--)
	{
		cin >> x;
		Try(1);
	}
	return 0;
}
