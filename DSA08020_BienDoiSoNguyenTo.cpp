#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
string s, t;
bool isprime(int);
vector <int> P;

int solve()
{
	set <string> se;
	cin >> s >> t;
	queue <pair<string, int>> q;
	q.push({s, 0});
	se.insert(s);
	while(!q.empty())
	{
		pair <string, int> top = q.front(); q.pop();
		string str = top.fi;
		int cnt = top.sec;
		if(str == t) return cnt;
		for(int i = 0; i < str.length(); i++)
		{
			char tmp = str[i];
			for(char j = '0'; j <= '9'; j++)
			{
				str[i] = j;
				int num = stoi(str);
				if(num > 1000 && isprime(num) == 1 && se.find(str) == se.end() )
				{
					if(str == t) return cnt+1;
					se.insert(str);
					q.push({str, cnt+1});
				}
			}
			str[i] = tmp;
		}
	}
	return 0;
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cout << solve() << endl;;
	}
	return 0;
}
bool isprime(int n)
{
	if(n < 2) return 0;
	if(n < 4) return 1;
	if(n%2==0 || n%3==0) return 0;
	int tmp = sqrt(n);
	for(int i = 5; i <= tmp; i+=6)
		if(n%i==0 || n%(i+2) == 0)
			return 0;
	return 1;
}


/*Code by: Tran Quang Huy*/