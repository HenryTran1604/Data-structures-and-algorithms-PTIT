#include <bits/stdc++.h>
using namespace std;
struct Cata{
	string num;
};
Cata operator * (Cata a, Cata b)
{
	string x = a.num, y = b.num;
	int len1 = x.size(), len2 = y.size(), z;
	vector <int> v(len1+len2, 0);
	int i_n1 = 0, i_n2 = 0, carry = 0;
	for(int i = len1-1; i >= 0; i--)
	{
		i_n2 = 0, carry = 0;
		for(int j = len2-1; j >= 0; j--)
		{
			int sum = (x[i] - '0')*(y[j] - '0') + v[i_n1+i_n2] + carry;
			v[i_n1 + i_n2] = sum%10;
			carry = sum/10;
			i_n2++;
		}
		if(carry > 0) v[i_n1 + i_n2] += carry;
		i_n1++;
	}
	int i = v.size()-1;
	while(v[i] == 0)
		i--;
	string ans = "";
	for(int j = i; j >= 0; j--)
		ans.push_back(v[j]+'0');
	Cata res; res.num = ans;
	return res;
}
Cata operator + (Cata a, Cata b)
{
	string x = a.num, y = b.num;
	if(x.size() < y.size())
		swap(x, y); // x > y;
	while(y.size() < x.size()) y = "0" + y;
	string ans = "";
	int carry = 0;
	for(int i = x.size()-1; i >= 0; i--)
	{
		int sum = (x[i]-'0') + (y[i] - '0') + carry;
		ans.push_back(sum%10 + '0');
		carry = sum/10;
	}
	if(carry > 0) ans.push_back('1');
	reverse(ans.begin(), ans.end());
	Cata res; res.num = ans;
	return res;
}
int main()
{
	
	int t; cin >> t;
	Cata list[101];
	list[0].num = "1", list[1].num = "1";
	for(int i = 2; i <= 100; i++)
	{
		for(int j = 0; j < i; j++)
		{
			list[i] = list[i] + (list[j]*list[i-j-1]);
		}
	}
	while(t--)
	{
		int n; cin >> n;
		cout << list[n].num << endl;
		
	}
	return 0;
}
