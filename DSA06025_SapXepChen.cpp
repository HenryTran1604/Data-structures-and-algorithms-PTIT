#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
void xuatMang(int *a, int n)
{
	cout << "Buoc " << n-1 << ": ";
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
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
		for(int i = 1; i < n; i++)
		{
			xuatMang(a, i);
			int j = i-1, value = a[i];
			while(j >= 0 && a[j] > value)
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = value;
		}
		xuatMang(a, n);
		
//	}
	return 0;
}
