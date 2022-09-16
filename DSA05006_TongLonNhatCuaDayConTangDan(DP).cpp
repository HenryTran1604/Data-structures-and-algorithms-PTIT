#include <bits/stdc++.h>
using namespace std;
int N, a[1001];
void NhapMang()
{
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
}
void solve()
{
	int S[1001], ans = INT_MIN;
	for(int i = 0; i < N; i++)
	{
		S[i] = a[i];
		for(int j = 0; j < i; j++)
		{
			if(a[i] > a[j])
				S[i] = max(S[i], S[j] + a[i]);
		}
		ans = max(ans, S[i]);
	}
	cout << ans << endl;
}
int main()
{
	
	int t; cin >> t;
	while(t--)
	{
		NhapMang();
		solve();
	}
	return 0;
}
