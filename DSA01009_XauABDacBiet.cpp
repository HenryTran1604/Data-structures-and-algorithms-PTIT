#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k;
char a[20];
vector <string> v;
void update(){
	int count1 = 0, count2;
	for(int i = 0; i <= n-k; i++)
	{
		count2 = 0;
		for(int j = i; j < i+k; j++)
		{
			if(a[j] == 'A') count2++;
		}
		if(count2 == k) count1++;
	}
	if(count1 == 1) v.push_back(a);
}
void Try(int i)
{
	for(char j = 'A'; j <= 'B'; j++)
	{
		a[i] = j;
		if(i == n-1) update();
		else Try(i+1);
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		cin >> n >> k;
		Try(0);
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++)
			cout << v[i] << endl;
		v.clear();
	}
	return 0;
}
