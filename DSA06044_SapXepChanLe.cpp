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
		int a[n], b[n], c[n];
		int k = 0, l = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(i%2) b[k++] = a[i];
			else c[l++] = a[i];
		}
		sort(c, c+l);
		sort(b, b+k, greater <int>());
		for(int i = 0; i < k; i++)
			cout << c[i] << " " << b[i] << " ";
		if(n%2) cout << c[l-1];
		cout << endl;
		
		
//	}
	return 0;
}
