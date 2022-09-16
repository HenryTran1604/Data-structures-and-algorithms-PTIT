#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char x, a[20]; int k;
void print()
{
	for(int i = 1; i <= k; i++)
		cout << a[i];
	cout << endl;
}
void Try(int i, char curr)
{
	for(char j = curr; j <= x; j++)
	{
		a[i] = j;
		if(i == k)
			print();
		else Try(i+1, j);
	}
}
int main()
{
	int t; t = 1;
	while(t--)
	{
		cin >> x >> k;
		Try(1, 'A');
	}
	return 0;
}
