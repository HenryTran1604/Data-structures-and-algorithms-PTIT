#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
int n;
bool isprime(int a)
{
	if(a < 2) return 0;
	if(a < 4) return 1;
	if(a%2 == 0 || a%3==0) return 0;
	int tmp = sqrt(a);
	for(int i = 5; i <= tmp; i+=6)
	{
		if(a%i==0 || a%(i+2) == 0)
			return 0;
	}
	return 1;
}
int solve()
{
	queue <pii> q;
	set <int> se;
	q.push({n, 0});
	
	while(!q.empty())
	{
		pii top = q.front(); q.pop();
		if(top.fi == 1) return top.sec;
		if(isprime(top.fi) == 0)
		{
			for(int i = 2; i*i <= top.fi; i++)
			{
				if(top.fi%i == 0)
				{
					if(se.count(top.fi/i) == 0)
					{
						q.push({top.fi/i, top.sec+1});
						se.insert(top.fi/i);
					}
				}
			}
		}
		if(top.fi > 1)
		{
			if(top.fi == 2) return top.sec+1;
			if(se.count(top.fi - 1) == 0){
				q.push({top.fi-1, top.sec+1});
				se.insert(top.fi - 1);	
			}
			
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
		cin >> n;
		cout << solve() << endl;
	}
	return 0;
}
//1
//1000000000



/*Code by: Tran Quang Huy*/