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
		int a[n], temp=0, max=0;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			if(i != 0)
				a[i] += a[i-1];
		}
		int id = -1;
		for(int i = 1; i < n; i++)
		{
			if(a[i] == a[n-1] - a[i-1])
			{
				id = i+1;
				break;
			}
		}
		cout << id;
		cout << endl;
	}
	return 0;
}



