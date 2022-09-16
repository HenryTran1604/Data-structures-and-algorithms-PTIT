#include <bits/stdc++.h>
using namespace std;
int k; char a[15], c;
void in()
{
	for(int i = 1; i <= k; i++)	
		cout << a[i];
	cout << endl;
}
void Try(int i)
{
	for(int j = a[i-1]; j <= c; j++)
	{
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}
int main()
{
	cin >> c >> k;
	memset(a, 'A', sizeof(a));
	Try(1);
	return 0;
}
