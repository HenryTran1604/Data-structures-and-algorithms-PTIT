#include <bits/stdc++.h>
#define endl '\n'
#define toint(a) (int) a - '0'
using namespace std;
using pii = pair<int, int>;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	cin.ignore();
	while(test--)
	{
		int n; ll k; cin >> n >> k;
		ll a[n+1], sum[n+1];
		a[0] = sum[0] = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			sum[i] = a[i];
			if(i > 0) sum[i] += sum[i-1];
		}
		int ok = 0;
		for(int i = 0; i <= n; i++)
		{
			if(binary_search(sum+i+1, sum+n+1, sum[i]+k))
			{
				ok = 1;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
//1
//2 5
//2 3

/*Code by: Tran Quang Huy*/