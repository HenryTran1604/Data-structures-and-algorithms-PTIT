#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{

		int rightMax[n];
		rightMax[n-1]= arr[n-1];
		for(int i = n-2; i>=0; i--)
			rightMax[i] = max(rightMax[i+1] , arr[i]);

		
		int maxlen = 0;
		int i = 0, j = 0;
		while(i<n && j<n)
		{
			if(rightMax[j] > arr[i])
			{
				maxlen = max(maxlen, j-i );
				j++;
			}
			else // if(rightMax[j] < leftMin[i])
				i++;
		}
		
		return maxlen;
		
		
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int ans = solve(a, n);
		if(ans == 0) cout << -1 << endl;
		else
			cout << ans << endl;;
	}
	return 0;
}


