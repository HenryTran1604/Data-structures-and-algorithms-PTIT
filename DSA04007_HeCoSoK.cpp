#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; string a, b; cin >> k >> a >> b;
		if(a.length() < b.length())
			swap(a, b); // a > b;
		while(b.length() < a.length()) b = "0" + b;
		int carry = 0;
		vector <int> v;
		for(int i = a.length()-1; i >= 0; i--)
		{
			int sum = (a[i]-'0') + (b[i]-'0') + carry;
			carry = sum/k;
			v.push_back(sum%k);
		}
		if(carry > 0) v.push_back(carry);
		reverse(v.begin(), v.end());
		for(int x : v)
			cout << x;
		cout << endl;
	}
	return 0;
}
