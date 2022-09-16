#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, s, a[21], cnt = 0;
bool div(string a)
{
	int num = 0;
	for(int i = 0; i < a.length(); i++)
	{
		num = (num*10 + (a[i]-'0'))%n;
	}
	return num == 0;
}
void sinh()
{
	queue <string> q;
	q.push("9");
	while(!q.empty())
	{
		string u = q.front(); q.pop();
		if(div(u))
		{
			cout << u << endl;
			return;
		}
		else
		{
			q.push(u + "0");
			q.push(u + "9");
		}
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		sinh();
	}
	return 0;
}
