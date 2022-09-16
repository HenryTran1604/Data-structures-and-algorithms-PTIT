#include <bits/stdc++.h>
using namespace std;
int C[1001][1001]={};
int QHD(string s1, string s2)
{
	int n = s1.length(), m = s2.length();
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(s1[i-1] == s2[j-1]) C[i][j] = C[i-1][j-1] + 1;
			else C[i][j] = max(C[i-1][j], C[i][j-1]);
		}
	}
	return C[n][m];
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << QHD(s1, s2) << endl;
	}
	return 0;
}


