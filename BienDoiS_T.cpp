#include <bits/stdc++.h>
using namespace std;

void dem(int s, int t)
{
	long long a[20000], i, j;
	//memset(a, INT_MAX, 20000);
	for(i = 0; i < 20000; i++) a[i] = INT_MAX;
	
	queue <int> Q;
	Q.push(s); a[s] = 0;
	while(Q.empty() == 0)
	{
		int i = Q.front(); Q.pop();
		if(a[t] != INT_MAX) break;
		if(i-1 > 0 && a[i-1] == INT_MAX)
		{
			a[i-1] = min(a[i-1], a[i]+1);
			Q.push(i-1);
		}
		if(2*i < 20000 && a[2*i] == INT_MAX)
		{
			a[2*i] = min(a[i*2], a[i]+1);
			Q.push(2*i);
		}
	}

	cout <<  a[t] << endl;	
}
int main()
{
	int test; cin >> test;
	while(test--)
	{
		int s, t; cin >> s >> t;
		dem(s, t);
	}
	return 0;
}

