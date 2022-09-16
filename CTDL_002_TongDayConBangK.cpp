#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int a[25], b[25], n;
ll k, cnt = 0;
void inp()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
}
void print()
{
	ll sum = 0;
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == 1) sum += a[i];
	}
	if(sum == k)
	{
		cnt++;
		for(int i = 0; i <= n; i++)
			if(b[i] == 1) cout << a[i] << " ";
		cout << endl;
	}
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		b[i] = j;
		if(i == n) print();
		else Try(i+1);
	}
}
int main() {
	inp();
	Try(1);
	cout << cnt;
	return 0;
}



