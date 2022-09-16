#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		long long cnt= 0, n; cin >> n;
		queue <string> q;
		vector <string> v;
		q.push("6"); q.push("8");
		while(!q.empty())
		{
			string x = q.front(); q.pop();
			if(x.length() > n)
			{
				break;
			}
			v.push_back(x);
			q.push(x+"6");
			q.push(x+"8");
		}
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << "\n";
	}
	return 0;
}
/*Code by: Tran Quang Huy*/