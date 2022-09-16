#include <bits/stdc++.h>
using namespace std;
int F[1001][1001];
string s1, s2;
void solve()
{
	int len1 = s1.length(), len2 = s2.length();
	for(int i = 0; i <= len1; i++)
	{
		for(int j = 0; j <= len2; j++)
		{
			if(i == 0||j == 0) F[i][j] = 0;
			else
			{
				if(s1[i-1] == s2[j-1])
					F[i][j] = F[i-1][j-1]+1;
				else
					F[i][j] = max(F[i][j-1], F[i-1][j]);
			}
		}
	}
	cout << F[len1][len2] << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> s1 >> s2;
		solve();
	}
	return 0;
}
