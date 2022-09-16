#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[3] = {};
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[x]++;
		}
		for(int i = 0; i < 3; i++)
		{
			while(a[i]--)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
