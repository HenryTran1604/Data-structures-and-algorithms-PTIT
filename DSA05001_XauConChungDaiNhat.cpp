#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string a, b;
int LCS[1001][1001];
void solve()
{
	cin >> a >> b;
	int len1 = a.size(), len2 = b.length();
	for(int i = 0; i <= len1; i++)
	{
		for(int j = 0; j <= len2; j++)
		{
			if(i == 0||j == 0)
				LCS[i][j] = 0;
			else
			{
				if(a[i-1] == b[j-1])
					LCS[i][j] = LCS[i-1][j-1]+1;
				else
					LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
			}
		}
	}
	cout << LCS[len1][len2] << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
}
/*Code by: Tran Quang Huy*/
