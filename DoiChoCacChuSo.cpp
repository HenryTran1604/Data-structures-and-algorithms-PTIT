#include <bits/stdc++.h>
using namespace std;
int k; string s, maxn;
void Try(int k)
{
	if(k == 0) return;
	int len = s.length();
	for(int i = 0; i < len-1; i++)
	{
		for(int j = i+1; j < len; j++)
		{
			if(s[i] < s[j])
			{
				swap(s[i], s[j]);
				if(s > maxn)
					maxn = s;
				Try(k-1);
				swap(s[i], s[j]);
			}
		}
	}	
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> k >> s;
		maxn = s;
		Try(k);
		cout << maxn << endl;
	}
	return 0;
}
