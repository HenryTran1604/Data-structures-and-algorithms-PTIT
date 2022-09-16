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
		int a[n], save[n][n] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++)
		{
			if(i == 0)
			{
				for(int j = 0; j < n; j++)
					save[i][j] = a[j];
			}
			else
			{
				for(int j = 0; j < n-i; j++)
				{
					save[i][j] = save[i-1][j] + save[i-1][j+1];
				}
				
			}
		}
		for(int i = n-1; i >= 0; i--)
		{
			cout << '[';
			for(int j = 0; j < n-i-1; j++)
			{
				cout << save[i][j] << " ";
			}
			cout << save[i][n-i-1] << "] ";
		}
		cout << endl;
	}
	return 0;
}
