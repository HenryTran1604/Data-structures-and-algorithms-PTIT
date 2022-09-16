#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		multiset <int> ms;
		for(int i = 0; i < k; i++)
			ms.insert(a[i]);
		for(int i = k; i < n; i++)
		{
			cout << *ms.rbegin() << " ";
			ms.insert(a[i]);
			ms.erase(ms.find(a[i-k]));
		}
		cout << *ms.rbegin() << " ";
		cout << endl;
	}
	return 0;
}



