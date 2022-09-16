#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
struct Time{
	int start, finish;
};
bool cmp(Time a, Time b)
{
	return a.finish < b.finish;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		Time a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i].start;
		for(int i = 0; i < n; i++)
			cin >> a[i].finish;
		sort(a, a+n, cmp);
		int cnt = 1, i = 0;
		for(int j = 1; j < n; j++)
		{
			if(a[j].start >= a[i].finish) // hanh dong i ket thuc truoc khi j bat dau
			{
				cnt++;
				i = j; // tien hanh hanh dong j;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
