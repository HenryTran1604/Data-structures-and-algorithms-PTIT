#include <bits/stdc++.h>
using namespace std;
int a[20], n, k;
void in()
{
	int count = 0;
	if(a[1] == 1) return;
	for(int i = 1; i <= n-2; i++)
	{
		if(a[i] == 1) count++;
		else count = 0;
		if(count >= 2) return;
	}
	cout << "H";
	for(int i = 1; i <= n-2; i++)
		if(a[i] == 0) cout << "A";
		else cout << "H";
	cout << 'A';
	cout << endl;
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		a[i] = j;
		if(i == n-2) in();
		else Try(i+1);
	}
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
    	cin >> n;
		if(n < 3) cout << "HA\n";
		else
    	Try(1);
	}
}

