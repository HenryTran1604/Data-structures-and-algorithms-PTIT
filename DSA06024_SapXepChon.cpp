#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
void xuatMang(int a[], int n)
{
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
		for(int i = 0; i < n-1; i++)
		{
			int min_id = i;
			for(int j = i+1; j < n; j++)
			{
				if(a[j] < a[min_id])
					min_id = j;
			}
			swap(a[i], a[min_id]);
			cout << "Buoc " << i+1 << ": ";
			xuatMang(a, n);
		}
		
		
//	}
	return 0;
}
