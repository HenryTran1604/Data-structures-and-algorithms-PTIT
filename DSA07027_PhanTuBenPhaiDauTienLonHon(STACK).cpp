#include <bits/stdc++.h>
using namespace std;

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int &x : a)
			cin >> x;
		stack <int> st;
		vector <int> v;
		v.push_back(-1);
		st.push(a[n-1]);
		for(int i = n-2; i >= 0; i--)
		{
			while(!st.empty())
			{
				if(st.top() > a[i])
				{
					v.push_back(st.top());
					break;
				}
				else st.pop();
			}
			if(st.empty()) v.push_back(-1);
			st.push(a[i]);
		}
		for(int i = n-1; i >= 0; i--)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/