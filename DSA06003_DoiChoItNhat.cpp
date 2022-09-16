#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int cnt = 0;
		for(int i = 0; i < n-1; i++)
		{
			int min_id = i;
			for(int j = i+1; j < n; j++)
			{
				if(a[j] < a[min_id])
					min_id = j;
			}
			if(i != min_id) {
				swap(a[i], a[min_id]);
				cnt++;
			}
		}
		cout << cnt << endl;
		
	}
	return 0;
}

