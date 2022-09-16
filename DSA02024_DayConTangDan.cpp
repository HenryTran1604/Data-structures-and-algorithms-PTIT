#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, b[25];
string a[25];
vector <string> v;
void inp()
{
	cin >> n ;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
}
void print()
{
	int val = INT_MIN, cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == 1)
		{
			if(val < stoi(a[i]))
			{
				val = stoi(a[i]);
				cnt++;
			}
			else return;
		}
	}
	if(cnt < 2) return;
	string tmp;
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == 1) tmp = tmp + a[i] + ' ';
	}
	v.push_back(tmp);
}
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		b[i] = j;
		if(i == n) print();
		else Try(i+1);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		
		inp();
		Try(1);
		sort(v.begin(), v.end());
		for(string x : v)
			cout << x << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
