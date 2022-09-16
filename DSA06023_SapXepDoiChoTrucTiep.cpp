#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;

int main()
{
//	int t; cin >> t;
//	while(t--)
//	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n-1; i++)
		{
			cout << "Buoc " << i+1 <<": ";
			for(int j = i+1; j < n; j++)
			{
				if(a[j] < a[i])
					swap(a[i], a[j]);
			}
			for(int j = 0; j < n; j++)
				cout << a[j] << " ";
			cout << endl;
		}
//	}
	return 0;
}
/*Code by: Tran Quang Huy*/
