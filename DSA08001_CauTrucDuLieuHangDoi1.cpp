#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		int q, x; cin >> q;
		queue <int> Q;
		while(q--)
		{
			cin >> x;
			switch(x)
			{
				case 1:
					cout << Q.size() << "\n";
					break;
				case 2:
					if(Q.empty() == 1) cout << "YES\n"; 
					else cout << "NO\n";
					break;
				case 3:
					int x; cin >> x;
					Q.push(x); break;
				case 4:
					if(!Q.empty())	Q.pop();
					break;
				case 5:
					if(!Q.empty()) cout << Q.front() << "\n";
					else cout << -1 << '\n';
					break;
				default:
					if(!Q.empty()) cout << Q.back() << "\n";
					else cout << -1 << '\n';
					break;
			}
		}
	}
	return 0;
}
/*Code by: Tran Quang Huy*/