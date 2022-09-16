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
		ll a[n], id = 0;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			if(a[i] < a[i-1])
				id = i;
		}
		cout << id;
		
		cout << endl;
	}
	return 0;
}



