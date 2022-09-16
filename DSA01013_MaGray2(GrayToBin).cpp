#include <bits/stdc++.h>
using namespace std;
string s;
int b[20];
void GrayToBin() // b[i]^b[i-1] = G[i} => b[i] = abs(G[i] - b[i-1])
{
	b[0] = s[0] - '0';
	cout << b[0];
	for(int i = 1; i < s.length(); i++)
	{
		b[i] = abs(s[i]-'0' - b[i-1]);
		cout << b[i];
	}
	cout << "\n";
}

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		GrayToBin();	
	}
	return 0;
}
