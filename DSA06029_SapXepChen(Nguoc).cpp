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
		vector <vector <int>> v;
		for(int i = 1; i < n; i++)
		{
			vector <int> s;
			for(int j = 0; j < i; j++)
				s.push_back(a[j]);
			v.push_back(s);
			int j = i-1, value = a[i];
			while(j >= 0 && a[j] > value)
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = value;
		}
		cout << "Buoc " << n-1 << ": ";
		for(int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << endl;
		for(int i = n-2; i >= 0; i--)
		{
			cout << "Buoc " << i << ": ";
			for(int x : v[i])
				cout << x << " ";
			cout << endl;
		}
		
		
//	}
	return 0;
}
