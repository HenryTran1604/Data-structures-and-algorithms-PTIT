#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int check(int n)
{
	int a[10] = {0};
	while(n > 0)
	{
		a[n%10]++;
		if(a[n%10] > 1 || n%10 > 5) return 0;
		n /= 10;
	}
	return 1;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int L, R, cnt = 0;
		cin >> L >> R;
		for(int i = L; i <= R; i++)
		{
			cnt += check(i);
		}
		cout << cnt << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/