#include <bits/stdc++.h>
#define endl '\n'
#define toint(a) (int) a - '0'
using namespace std;
using pii = pair<int, int>;
using ll = long long;
int n, k, a[21], sum, used[21], ok;
void inp()
{
	sum = 0; 
	cin >> n >> k;
	memset(used, 0, sizeof(used));
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
}
void Try(int s, int cnt)
{
	if(cnt == k)
	{
		ok = 1;
		return;
	}
	if(ok == 1) return;
	for(int j = 0; j < n; j++)
	{
		if(!used[j])
		{
			used[j] = 1;
			if(s == sum/k) Try(0, cnt+1);
			else if(s < sum/k) Try(s+a[j], cnt);
		}
		used[j] = 0;
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	cin.ignore();
	while(test--)
	{
		inp();
		if(sum%k)	cout << 0 << endl;
		else
		{
			Try(0, 0);
			cout << ok << endl;
		}
	}
	return 0;
}


/*Code by: Tran Quang Huy*/