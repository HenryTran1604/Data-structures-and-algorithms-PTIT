#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++)
		{
			cout << '[';
			if(i == 0)
			{
				for(int j = 0; j < n-1; j++)
					cout << a[j] << " ";
				cout << a[n-1];
			}
			else
			{
				for(int j = 0; j < n-i; j++)
				{
					a[j] += a[j+1];
					if(j != n-i-1) cout << a[j] << " ";
					else cout << a[j];
				}
				
			}
			cout << ']' << endl;
		}
		
	}
	return 0;
}
