#include <bits/stdc++.h>
#define fi first
#define sec second
using namespace std;
int n;
string st, en;
set <string> se;
void inp()
{
	cin >> n >> st >> en;
	se.clear();
	for(int i = 0; i < n; i++)
	{
		string s; cin >> s;
		if(s != st)
			se.insert(s);
	}
}
int BFS(string u)
{
	queue <pair<string, int>> q;
	q.push({u, 0});
	
	while(!q.empty()){
		pair <string, int> top = q.front(); q.pop();
		if(top.fi == en)
			return top.sec;
		int len = top.fi.length();
		for(int i = 0; i < len; i++)
		{
			char tmp = top.fi[i];
			for(char x = 'A'; x <= 'Z'; x++)
			{
				top.fi[i] = x;
				if(top.fi == en)
					return top.sec+1;
				if(se.count(top.fi) != 0)
				{
					q.push({top.fi, top.sec+1});
					se.erase(top.fi);
				}
			}
			top.fi[i] = tmp;
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int tt; cin >> tt;
	while(tt--)
	{
		inp();
		cout << BFS(st)+1 << endl;
	}
	return 0;
}
