#include <bits/stdc++.h>
#define endl '\n'
#define toint(a) (int) a - '0'
using namespace std;
using pii = pair<int, int>;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	cin.ignore();
	while(test--)
	{
		string s; cin >> s;
		ll sum = 0, num;
		for(int i = 0; i < s.length(); i++)
		{
			num = toint(s[i]);
			sum += num;
			for(int j = i+1; j < s.length(); j++)
			{
				num = 10*num + toint(s[j]);
				sum += num;
			}
		}
		cout << sum << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/