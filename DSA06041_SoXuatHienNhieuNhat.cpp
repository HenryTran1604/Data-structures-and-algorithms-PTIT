#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], maxn = 0, value;
		map <int, int> mp;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
			if(mp[a[i]] > maxn){
				maxn = mp[a[i]];
				value = a[i];
			}
		}
		if(maxn > n/2) cout << value;
		else cout << "NO";
		cout << endl;
	}
	return 0;
}



