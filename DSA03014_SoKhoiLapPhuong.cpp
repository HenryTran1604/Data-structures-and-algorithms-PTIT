#include <bits/stdc++.h>
#define maxn 1000001
#define endl '\n'
using namespace std;
using ll = long long;
ll a[maxn], b[20], n, ans, cnt ;
string s;
void update()
{
	if(cnt == 0)
	{
		cnt++;
		return;
	}
	ll num = 0;
	for(int i = 1; i <= n; i++)
	{
		if(b[i])
			num = 10*num + s[i-1] - '0';
	}
	if(binary_search(a, a+maxn, num))
		ans = max(ans, num);
}
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		b[i] = j;
		if(i == n)
			update();
		else Try(i+1);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	for(ll i = 0; i <= 1e6; i++)
		a[i] = i*i*i;
	int test; cin >> test;
	while(test--)
	{
		cin >> s; 
		ans = -1; n = s.length(); cnt = 0;
		Try(1);
		cout << ans << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/