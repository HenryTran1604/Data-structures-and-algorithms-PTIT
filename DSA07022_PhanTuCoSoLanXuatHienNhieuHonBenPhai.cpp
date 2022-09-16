#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		vector <int> v(1e6+1, 0);
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			v[a[i]]++;
		}
		int RF[n];
		stack <int> st;
		for(int i = n-1; i >= 0; i--)
		{
			while(!st.empty() && v[a[i]] >= v[st.top()]) st.pop();
			if(st.empty()) RF[i] = -1;
			else RF[i] = st.top();
			st.push(a[i]);
		}
		for(int i = 0; i < n; i++)
			cout << RF[i] << " ";
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/