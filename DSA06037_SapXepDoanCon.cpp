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
		int minVal[n], maxVal[n], tmp = a[0];
		maxVal[0] = a[0], minVal[n-1] = a[n-1];
		vector <int> v;
		for(int i = 1; i < n; i++)
		{
			maxVal[i] = max(a[i], maxVal[i-1]);
			minVal[n-i-1] = min(a[n-i-1], minVal[n-i]);
		}
		for(int i = 0; i < n-1; i++)
		{
			if(maxVal[i] <= minVal[i+1])
			{
				v.push_back(i+1);
			}
		}
		cout << v.size() << endl;
		for(int x : v)
			cout << x << " ";
		cout << endl;
		
	}
	return 0;
}
