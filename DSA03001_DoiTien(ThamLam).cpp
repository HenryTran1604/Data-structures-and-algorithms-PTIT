#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t, a[] = {1, 2, 5 ,10, 20, 50, 100, 200, 500, 1000}, M;
	cin >> t;
	while(t--)
	{
		int cnt = 0;a
		cin >> M; 
		for(int i = 9; i >= 0; i--)
		{
			while(M >= a[i])
			{
				cnt++;
				M = M-a[i];
			}
		}
		cout << cnt << endl;
	}
}


