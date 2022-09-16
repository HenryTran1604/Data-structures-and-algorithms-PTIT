#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, src[16], des[16], ok, cnt = 0;
void inp()
{
	cin >> n >> k; ok = 0; cnt = 0;
	for(int i = 1; i <= k; i++)
	{
		cin >> des[i];
		src[i] = i;
	}
}
bool cmp()
{
	for(int i = 1; i <= k; i++)
		if(src[i] != des[i])
			return 1;
	return 0;
}
void sinh()
{
	int i = k;
	while(src[i] == n-k+i) i--;
	if(i == 0)
		ok = 1;
	else
	{
		src[i]++;
		for(int j = i+1; j <= k; j++)
			src[j] = src[j-1]+1;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		do
		{
			cnt++;
			sinh();
		}
		while(!ok && cmp());
		cout << cnt+1 << endl;
	}
	return 0;
}
