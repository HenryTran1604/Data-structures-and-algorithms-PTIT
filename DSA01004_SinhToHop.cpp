#include <bits/stdc++.h>
using namespace std;
int n, c[20], k, ok = 0;
void inp()
{
	cin >> n >> k;
	for(int i = 0; i <= k; i++)
		c[i] = i;
}
void print()
{
	for(int i = 1; i <= k; i++)	
		cout << c[i];
	cout << " ";
}
void sinh()
{
	print();
	int i = k;
	while(c[i] == n-k+i) i--;
	if(i == 0)
	{
		ok = 1;
	}
	else
	{
		c[i]++;
		for(int j = i+1; j <= k; j++)
			c[j] = c[j-1]+1;
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		ok = 0;
		inp();
		while(!ok)
		{
			sinh();
		}
					cout << endl;

	}
	return 0;
}

