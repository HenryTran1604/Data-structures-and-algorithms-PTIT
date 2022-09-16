#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin >> t;
   while(t--)
   {
   		 int n; cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	    {
	    	cin >> a[i];
		}
		
		// bubble sort();
		bool haveSwap;
		vector <vector <int>> v;
		for(int i = 0; i < n-1; i++)
		{
			haveSwap = false;
			for(int j = 0; j < n-i-1; j++)
			{
				if(a[j] > a[j+1])
				{
					swap(a[j], a[j+1]);
					haveSwap = true;
				}
			}
			if(haveSwap == false)
				break;
			vector <int> s;
			for(int i = 0; i < n; i++)
				s.push_back(a[i]);
			v.push_back(s);
		}
		for(int i = v.size()-1; i >= 0; i--)
		{
			cout << "Buoc " << i+1 << ": ";
			for(int x : v[i])
				cout << x << " ";
			cout << endl;
		}
   }
    return 0;
}
#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	cin >> test;
	while(test--)
	{

	}
	return 0;
}

