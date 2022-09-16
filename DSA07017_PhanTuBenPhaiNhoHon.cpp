#include <bits/stdc++.h>
using namespace std;

//		7
//		5  1  9  2  5  1  7
//mp	
//		9  9 -1  5  7  7 -1
//		2  2 -1  1 -1 -1 -1
void inp(int a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
void solve(int a[], int n)
{
	int R1[n] = {}, R2[n] = {};
	stack <int> st1, st2;
	for(int i = n-1; i >= 0; i--)
	{
		while(!st1.empty() && a[i] >= a[st1.top()]) st1.pop();
		if(st1.empty()) R1[i] = -1;
		else R1[i] = st1.top();
		st1.push(i);
		
		while(!st2.empty() && a[i] <= a[st2.top()]) st2.pop();
		if(st2.empty()) R2[i] = -1;
		else R2[i] = st2.top();
		st2.push(i);
	}
	
	for(int i = 0; i < n; i++)
		if(R1[i] == -1 || R2[R1[i]] == -1)
			cout << -1 << " ";
		else cout << a[R2[R1[i]]] <<" ";
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		inp(a, n);
		solve(a, n);
	}
	return 0;
}

/*Code by: Tran Quang Huy*/