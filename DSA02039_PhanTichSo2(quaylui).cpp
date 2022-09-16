#include <bits/stdc++.h>
using namespace std;
int n, a[100];
vector <vector<int>> v;
void Try(int i, int j, int sum)
{
	for(int k = j; k >= 1; k--)
	{
		if(sum + k <= n)
		{
			a[i] = k;
			sum += k;
			if(sum == n)
			{
				vector <int> s;
				for(int p = 1; p <= i; p++)
					s.push_back(a[p]);
				v.push_back(s);
//				{
//					cout << a[p] << " ";
//				}
//				cout << endl;
			}
			else Try(i+1, k, sum);
			sum -= k;
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		v.clear();
		Try(1, n, 0);
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++)
		{
			cout << '(';
			for(int j = 0; j < v[i].size()-1; j++)
				cout << v[i][j] << " ";
			cout << v[i].back() << ") ";
//			cout << endl;
		}
		cout << endl;		
	}
	return 0;
}


