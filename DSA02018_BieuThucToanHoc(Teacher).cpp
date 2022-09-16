#include <bits/stdc++.h>
using namespace std;
int ok, num[6], b[6];
void Try(int i, int s)
{
	if(ok) return;
	if(s == 23 && i == 5){
		ok = 1; return;
	}
	for(int j = 0; j < 5; j++)
	{
		if(b[j] == 0)
		{
			b[j] = 1;
			Try(i+1, s + num[j]);
			Try(i+1, s * num[j]);
			Try(i+1, s - num[j]);
			b[j] = 0;
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		for(int i = 0; i < 5; i++)
			cin >> num[i];
		ok = 0;
		for(int i = 0; i < 5; i++)
		{
			b[i] = 1;
			Try(1, num[i]);
			b[i] = 0;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
/*Code by: Tran Quang Huy*/