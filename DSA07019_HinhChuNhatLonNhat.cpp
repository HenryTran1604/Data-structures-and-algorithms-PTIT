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
		int n; cin >> n;
		vector <ll> H(n);
		for(ll &x : H)
			cin >> x;
		// solve
		int i = 0;
		ll res = 0;
		stack <int> st;
		while(i < n)
		{
			if(st.empty() || H[i] >= H[st.top()])
			{
				st.push(i);
				i++;
			}
			else
			{
				int idx = st.top(); st.pop();
				if(st.empty())
					res = max(res, H[idx]*i);
				else res = max(res, H[idx]*(i-st.top()-1));
			}
		}
		while(!st.empty())
		{
			int idx = st.top(); st.pop();
			if(st.empty())
				res = max(res, H[idx]*i);
			else res = max(res, H[idx]*(i-st.top()-1));
		}
		cout << res << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/