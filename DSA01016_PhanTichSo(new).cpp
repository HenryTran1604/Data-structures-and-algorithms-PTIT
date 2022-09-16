#include <bits/stdc++.h>
using namespace std;
int n, a[50];
void print(int len)
{
	cout << "(";
	for(int i = 1; i < len; i++)
	{
		cout << a[i] << " ";
	}
	
	cout << a[len] << ") ";
}
void Try(int i, int j, int sum)
{
	for(int k = j; k >= 1; k--)
	{
		a[i] = k;
		if(sum == k)
			print(i);
		else if(k < sum)
			Try(i+1, k, sum-k);
	}
}
int main()
{
	
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1, n, n);
		cout << endl;
	}
	return 0;
}


